#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(XRLoader)
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRLoader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRLoader);
// Type: UnityEngine.XR.Management::XRLoader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16035))
// CS Name: ::UnityEngine.XR.Management::XRLoader*
class CORDL_TYPE XRLoader : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Method Initialize addr 0x2c7647c size 0x8 virtual true final false
  inline bool Initialize();

  /// @brief Method Start addr 0x2c76484 size 0x8 virtual true final false
  inline bool Start();

  /// @brief Method Stop addr 0x2c7648c size 0x8 virtual true final false
  inline bool Stop();

  /// @brief Method Deinitialize addr 0x2c76494 size 0x8 virtual true final false
  inline bool Deinitialize();

  /// @brief Method GetLoadedSubsystem addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline T GetLoadedSubsystem();

  /// @brief Method GetSupportedGraphicsDeviceTypes addr 0x2c7649c size 0x70 virtual true final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::GraphicsDeviceType>* GetSupportedGraphicsDeviceTypes(bool buildingPlayer);

  static inline ::UnityEngine::XR::Management::XRLoader* New_ctor();

  /// @brief Method .ctor addr 0x2c7650c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XRLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLoader(XRLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLoader(XRLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLoader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRLoader, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRLoader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRLoader*, "UnityEngine.XR.Management", "XRLoader");
