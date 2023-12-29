#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteConfigSettings)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class RemoteConfigSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RemoteConfigSettings);
// Type: UnityEngine::RemoteConfigSettings
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2601)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15933))
// CS Name: ::UnityEngine::RemoteConfigSettings*
class CORDL_TYPE RemoteConfigSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  /// @brief Field Updated, offset 0x18, size 0x8
  __declspec(property(get = __get_Updated, put = __set_Updated))::System::Action_1<bool>* Updated;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  constexpr ::System::Action_1<bool>*& __get_Updated();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_Updated() const;

  constexpr void __set_Updated(::System::Action_1<bool>* value);

  /// @brief Method RemoteConfigSettingsUpdated addr 0x2d424b4 size 0x34 virtual false final false
  static inline void RemoteConfigSettingsUpdated(::UnityEngine::RemoteConfigSettings* rcs, bool wasLastUpdatedFromServer);

  // Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteConfigSettings(RemoteConfigSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteConfigSettings(RemoteConfigSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteConfigSettings();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  /// @brief Field Updated, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<bool>* ___Updated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RemoteConfigSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RemoteConfigSettings, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RemoteConfigSettings, ___Updated) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RemoteConfigSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettings*, "UnityEngine", "RemoteConfigSettings");
