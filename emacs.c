;; =========================================
;; Copyright : Atul Raut -  February 9, 2026
;; =========================================

;; --------------------------------------------------
;; ECB from local directory
;; --------------------------------------------------

(require 'package)
(setq package-archives
      '(("melpa" . "https://melpa.org/packages/")
        ("gnu"   . "https://elpa.gnu.org/packages/")))
(package-initialize)

(add-to-list 'load-path "/home/rauji/ecb")
(require 'ecb)

;; =========================
;; Safety
;; =========================
(put 'upcase-region 'disabled nil)

(add-hook 'after-init-hook
          (lambda ()
            (set-face-attribute 'default nil
                                :foreground "gray"
                                :background "black")))
