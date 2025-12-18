#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubsystemsAnalyticInfo)
// Forward declare root types
namespace UnityEngine::Analytics {
class SubsystemsAnalyticInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::SubsystemsAnalyticInfo);
// Dependencies UnityEngine.Analytics.SubsystemsAnalyticBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.SubsystemsAnalyticInfo
class CORDL_TYPE SubsystemsAnalyticInfo : public ::UnityEngine::Analytics::SubsystemsAnalyticBase {
public:
  // Declarations
  /// @brief Field id, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field library_name, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_library_name, put = __cordl_internal_set_library_name)) ::StringW library_name;

  /// @brief Field plugin_name, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_plugin_name, put = __cordl_internal_set_plugin_name)) ::StringW plugin_name;

  /// @brief Field version, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  /// @brief Method CreateSubsystemsAnalyticInfo, addr 0x6c59160, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::SubsystemsAnalyticInfo* CreateSubsystemsAnalyticInfo();

  static inline ::UnityEngine::Analytics::SubsystemsAnalyticInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::StringW const& __cordl_internal_get_library_name() const;

  constexpr ::StringW& __cordl_internal_get_library_name();

  constexpr ::StringW const& __cordl_internal_get_plugin_name() const;

  constexpr ::StringW& __cordl_internal_get_plugin_name();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_library_name(::StringW value);

  constexpr void __cordl_internal_set_plugin_name(::StringW value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x6c590cc, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemsAnalyticInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemsAnalyticInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemsAnalyticInfo(SubsystemsAnalyticInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemsAnalyticInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemsAnalyticInfo(SubsystemsAnalyticInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22574 };

  /// @brief Field id, offset: 0x38, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field plugin_name, offset: 0x40, size: 0x8, def value: None
  ::StringW ___plugin_name;

  /// @brief Field version, offset: 0x48, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field library_name, offset: 0x50, size: 0x8, def value: None
  ::StringW ___library_name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::SubsystemsAnalyticInfo, ___id) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::SubsystemsAnalyticInfo, ___plugin_name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::SubsystemsAnalyticInfo, ___version) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::SubsystemsAnalyticInfo, ___library_name) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::SubsystemsAnalyticInfo, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::SubsystemsAnalyticInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::SubsystemsAnalyticInfo*, "UnityEngine.Analytics", "SubsystemsAnalyticInfo");
