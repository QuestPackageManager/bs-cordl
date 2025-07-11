#pragma once
// IWYU pragma private; include "System/Platform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Platform)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System {
class Platform;
}
// Write type traits
MARK_REF_PTR_T(::System::Platform);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Platform
class CORDL_TYPE Platform : public ::System::Object {
public:
  // Declarations
  /// @brief Field checkedOS, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_checkedOS, put = setStaticF_checkedOS)) bool checkedOS;

  /// @brief Field isAix, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isAix, put = setStaticF_isAix)) bool isAix;

  /// @brief Field isFreeBSD, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isFreeBSD, put = setStaticF_isFreeBSD)) bool isFreeBSD;

  /// @brief Field isIBMi, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isIBMi, put = setStaticF_isIBMi)) bool isIBMi;

  /// @brief Field isMacOS, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isMacOS, put = setStaticF_isMacOS)) bool isMacOS;

  /// @brief Field isOpenBSD, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isOpenBSD, put = setStaticF_isOpenBSD)) bool isOpenBSD;

  /// @brief Method CheckOS, addr 0x440fd34, size 0x20c, virtual false, abstract: false, final false
  static inline void CheckOS();

  static inline bool getStaticF_checkedOS();

  static inline bool getStaticF_isAix();

  static inline bool getStaticF_isFreeBSD();

  static inline bool getStaticF_isIBMi();

  static inline bool getStaticF_isMacOS();

  static inline bool getStaticF_isOpenBSD();

  /// @brief Method get_IsAix, addr 0x4410134, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_IsAix();

  /// @brief Method get_IsFreeBSD, addr 0x4410020, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_IsFreeBSD();

  /// @brief Method get_IsIBMi, addr 0x44100d8, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_IsIBMi();

  /// @brief Method get_IsMacOS, addr 0x440ff40, size 0xe0, virtual false, abstract: false, final false
  static inline bool get_IsMacOS();

  /// @brief Method get_IsOpenBSD, addr 0x441007c, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_IsOpenBSD();

  static inline void setStaticF_checkedOS(bool value);

  static inline void setStaticF_isAix(bool value);

  static inline void setStaticF_isFreeBSD(bool value);

  static inline void setStaticF_isIBMi(bool value);

  static inline void setStaticF_isMacOS(bool value);

  static inline void setStaticF_isOpenBSD(bool value);

  /// @brief Method uname, addr 0x440fcb8, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t uname(::System::IntPtr buf);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Platform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Platform(Platform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Platform(Platform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Platform, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Platform);
DEFINE_IL2CPP_ARG_TYPE(::System::Platform*, "System", "Platform");
