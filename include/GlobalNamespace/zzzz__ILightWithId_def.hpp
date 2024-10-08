#pragma once
// IWYU pragma private; include "GlobalNamespace/ILightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILightWithId)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ILightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILightWithId);
// Type: ::ILightWithId
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ILightWithId*
class CORDL_TYPE ILightWithId {
public:
  // Declarations
  __declspec(property(get = get_isRegistered)) bool isRegistered;

  __declspec(property(get = get_lightId)) int32_t lightId;

  /// @brief Method ColorWasSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method __SetIsRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void __SetIsRegistered();

  /// @brief Method __SetIsUnRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void __SetIsUnRegistered();

  /// @brief Method get_isRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isRegistered();

  /// @brief Method get_lightId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_lightId();

  // Ctor Parameters [CppParam { name: "", ty: "ILightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILightWithId(ILightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILightWithId(ILightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16268 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILightWithId*, "", "ILightWithId");
