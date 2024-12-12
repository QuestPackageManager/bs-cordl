#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(XRLoader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRLoader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRLoader);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: UnityEngine.XR.Management.XRLoader
class CORDL_TYPE XRLoader : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Method Deinitialize, addr 0x483038c, size 0x8, virtual true, abstract: false, final false
  inline bool Deinitialize();

  /// @brief Method GetLoadedSubsystem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline T GetLoadedSubsystem();

  /// @brief Method GetSupportedGraphicsDeviceTypes, addr 0x4830394, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::GraphicsDeviceType>* GetSupportedGraphicsDeviceTypes(bool buildingPlayer);

  /// @brief Method Initialize, addr 0x4830374, size 0x8, virtual true, abstract: false, final false
  inline bool Initialize();

  static inline ::UnityEngine::XR::Management::XRLoader* New_ctor();

  /// @brief Method Start, addr 0x483037c, size 0x8, virtual true, abstract: false, final false
  inline bool Start();

  /// @brief Method Stop, addr 0x4830384, size 0x8, virtual true, abstract: false, final false
  inline bool Stop();

  /// @brief Method .ctor, addr 0x48303fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLoader(XRLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLoader(XRLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRLoader, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRLoader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRLoader*, "UnityEngine.XR.Management", "XRLoader");
