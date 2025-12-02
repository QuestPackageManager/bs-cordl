#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformLogger)
namespace OculusStudios::Platform::Core {
class IPlatformLogger;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformLogger);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLogger
class CORDL_TYPE PlatformLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Field logPrefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logPrefix, put = __cordl_internal_set_logPrefix)) ::StringW logPrefix;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformLogger"
  constexpr operator ::OculusStudios::Platform::Core::IPlatformLogger*() noexcept;

  /// @brief Method LogError, addr 0x364bb7c, size 0xb8, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogInfo, addr 0x364bc34, size 0xb8, virtual true, abstract: false, final true
  inline void LogInfo(::StringW message);

  /// @brief Method LogSensitive, addr 0x364bcf0, size 0x4, virtual true, abstract: false, final true
  inline void LogSensitive(::StringW message);

  /// @brief Method LogVerbose, addr 0x364bcec, size 0x4, virtual true, abstract: false, final true
  inline void LogVerbose(::StringW message);

  /// @brief Method LogWarning, addr 0x364bcf4, size 0xb8, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  static inline ::GlobalNamespace::PlatformLogger* New_ctor(::StringW logPrefix);

  constexpr ::StringW const& __cordl_internal_get_logPrefix() const;

  constexpr ::StringW& __cordl_internal_get_logPrefix();

  constexpr void __cordl_internal_set_logPrefix(::StringW value);

  /// @brief Method .ctor, addr 0x364b010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW logPrefix);

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformLogger"
  constexpr ::OculusStudios::Platform::Core::IPlatformLogger* i___OculusStudios__Platform__Core__IPlatformLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLogger(PlatformLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLogger(PlatformLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21061 };

  /// @brief Field logPrefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___logPrefix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLogger, ___logPrefix) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLogger, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLogger*, "", "PlatformLogger");
