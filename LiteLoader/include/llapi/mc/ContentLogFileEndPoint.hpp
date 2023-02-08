/**
 * @file  ContentLogFileEndPoint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContentLogFileEndPoint.
 *
 */
class ContentLogFileEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOGFILEENDPOINT
public:
    class ContentLogFileEndPoint& operator=(class ContentLogFileEndPoint const &) = delete;
    ContentLogFileEndPoint(class ContentLogFileEndPoint const &) = delete;
    ContentLogFileEndPoint() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTLOGFILEENDPOINT
    /**
     * @hash   -2106311025
     * @symbol  ?flush\@ContentLogFileEndPoint\@\@UEAAXXZ
     */
    MCVAPI void flush();
    /**
     * @hash   -668246589
     * @symbol  ?isEnabled\@ContentLogFileEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const;
    /**
     * @hash   -1207408875
     * @symbol  ?log\@ContentLogFileEndPoint\@\@UEAAXW4LogArea\@\@W4LogLevel\@\@PEBD\@Z
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const *);
    /**
     * @hash   157707885
     * @symbol  ?logOnlyOnce\@ContentLogFileEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const;
    /**
     * @hash   202527538
     * @symbol  ?setEnabled\@ContentLogFileEndPoint\@\@UEAAX_N\@Z
     */
    MCVAPI void setEnabled(bool);
#endif
    /**
     * @hash   290239748
     * @symbol  ??0ContentLogFileEndPoint\@\@QEAA\@VPath\@Core\@\@0\@Z
     */
    MCAPI ContentLogFileEndPoint(class Core::Path, class Core::Path);
    /**
     * @hash   433346635
     * @symbol  ?FILE_NAME\@ContentLogFileEndPoint\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const FILE_NAME;

};