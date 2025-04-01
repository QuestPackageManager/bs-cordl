#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/RegisterUpdateCallback.hpp"
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
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.RegisterUpdateCallback
class CORDL_TYPE RegisterUpdateCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Method Deinitialize, addr 0x482f534, size 0xa0, virtual false, abstract: false, final false
  static inline void Deinitialize();

  /// @brief Method Initialize, addr 0x482f320, size 0xa0, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method Update, addr 0x4832cd0, size 0x10, virtual false, abstract: false, final false
  static inline void Update();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegisterUpdateCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegisterUpdateCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegisterUpdateCallback(RegisterUpdateCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegisterUpdateCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegisterUpdateCallback(RegisterUpdateCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17422 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::RegisterUpdateCallback, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::RegisterUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::RegisterUpdateCallback*, "Unity.XR.Oculus", "RegisterUpdateCallback");
