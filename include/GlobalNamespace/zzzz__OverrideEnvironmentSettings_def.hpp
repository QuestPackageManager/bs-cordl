#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OverrideEnvironmentSettings)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct EnvironmentType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OverrideEnvironmentSettings);
// Type: ::OverrideEnvironmentSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OverrideEnvironmentSettings*
class CORDL_TYPE OverrideEnvironmentSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__data,
                      put = __cordl_internal_set__data))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _data;

  /// @brief Field overrideEnvironments, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideEnvironments, put = __cordl_internal_set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Method GetOverrideEnvironmentInfoForType, addr 0x1317bac, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetOverrideEnvironmentInfoForType(::GlobalNamespace::EnvironmentType environmentType);

  static inline ::GlobalNamespace::OverrideEnvironmentSettings* New_ctor();

  /// @brief Method SetEnvironmentInfoForType, addr 0x1317b44, size 0x68, virtual false, abstract: false, final false
  inline void SetEnvironmentInfoForType(::GlobalNamespace::EnvironmentType environmentType, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
  __cordl_internal_get__data() const;

  constexpr bool const& __cordl_internal_get_overrideEnvironments() const;

  constexpr bool& __cordl_internal_get_overrideEnvironments();

  constexpr void __cordl_internal_set__data(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set_overrideEnvironments(bool value);

  /// @brief Method .ctor, addr 0x1317c24, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverrideEnvironmentSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverrideEnvironmentSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverrideEnvironmentSettings(OverrideEnvironmentSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverrideEnvironmentSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverrideEnvironmentSettings(OverrideEnvironmentSettings const&) = delete;

  /// @brief Field overrideEnvironments, offset: 0x10, size: 0x1, def value: None
  bool ___overrideEnvironments;

  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OverrideEnvironmentSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideEnvironmentSettings, ___overrideEnvironments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideEnvironmentSettings, ____data) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverrideEnvironmentSettings*, "", "OverrideEnvironmentSettings");
