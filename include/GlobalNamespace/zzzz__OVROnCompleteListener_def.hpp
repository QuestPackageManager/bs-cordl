#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROnCompleteListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
CORDL_MODULE_EXPORT(OVROnCompleteListener)
// Forward declare root types
namespace GlobalNamespace {
class OVROnCompleteListener;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVROnCompleteListener);
// Dependencies UnityEngine.AndroidJavaProxy
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROnCompleteListener
class CORDL_TYPE OVROnCompleteListener : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  static inline ::GlobalNamespace::OVROnCompleteListener* New_ctor();

  /// @brief Method .ctor, addr 0x5c5e9d8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method onFailure, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void onFailure();

  /// @brief Method onSuccess, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void onSuccess();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVROnCompleteListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVROnCompleteListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVROnCompleteListener(OVROnCompleteListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVROnCompleteListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVROnCompleteListener(OVROnCompleteListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7234 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROnCompleteListener, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVROnCompleteListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROnCompleteListener*, "", "OVROnCompleteListener");
