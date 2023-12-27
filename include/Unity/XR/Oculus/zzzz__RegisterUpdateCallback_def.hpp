#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RegisterUpdateCallback)
// Forward declare root types
namespace Unity::XR::Oculus {
class RegisterUpdateCallback;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::RegisterUpdateCallback);
// Type: Unity.XR.Oculus::RegisterUpdateCallback
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15152))
// CS Name: ::Unity.XR.Oculus::RegisterUpdateCallback*
class CORDL_TYPE RegisterUpdateCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize addr 0x2c78420 size 0x7c virtual false final false
  static inline void Initialize();

  /// @brief Method Deinitialize addr 0x2c78680 size 0x7c virtual false final false
  static inline void Deinitialize();

  /// @brief Method Update addr 0x2c7bd90 size 0x10 virtual false final false
  static inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "RegisterUpdateCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegisterUpdateCallback(RegisterUpdateCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegisterUpdateCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegisterUpdateCallback(RegisterUpdateCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegisterUpdateCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::RegisterUpdateCallback, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::RegisterUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::RegisterUpdateCallback*, "Unity.XR.Oculus", "RegisterUpdateCallback");
