#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/NetSyncVoipAttenuationValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetSyncVoipAttenuationValue)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValue;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncVoipAttenuationValue);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.NetSyncVoipAttenuationValue
class CORDL_TYPE NetSyncVoipAttenuationValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field Decibels, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Decibels, put = __cordl_internal_set_Decibels)) float_t Decibels;

  /// @brief Field Distance, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Distance, put = __cordl_internal_set_Distance)) float_t Distance;

  static inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValue* New_ctor(::System::IntPtr o);

  constexpr float_t const& __cordl_internal_get_Decibels() const;

  constexpr float_t& __cordl_internal_get_Decibels();

  constexpr float_t const& __cordl_internal_get_Distance() const;

  constexpr float_t& __cordl_internal_get_Distance();

  constexpr void __cordl_internal_set_Decibels(float_t value);

  constexpr void __cordl_internal_set_Distance(float_t value);

  /// @brief Method .ctor, addr 0x3f92cc8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSyncVoipAttenuationValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSyncVoipAttenuationValue(NetSyncVoipAttenuationValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSyncVoipAttenuationValue(NetSyncVoipAttenuationValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15554 };

  /// @brief Field Decibels, offset: 0x10, size: 0x4, def value: None
  float_t ___Decibels;

  /// @brief Field Distance, offset: 0x14, size: 0x4, def value: None
  float_t ___Distance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::NetSyncVoipAttenuationValue, ___Decibels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncVoipAttenuationValue, ___Distance) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncVoipAttenuationValue, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncVoipAttenuationValue);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncVoipAttenuationValue*, "Oculus.Platform.Models", "NetSyncVoipAttenuationValue");
