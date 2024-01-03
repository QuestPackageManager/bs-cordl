#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Management/zzzz__XRLoader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XRLoaderHelper)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRLoaderHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRLoaderHelper);
// Type: UnityEngine.XR.Management::XRLoaderHelper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16035))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16036))
// CS Name: ::UnityEngine.XR.Management::XRLoaderHelper*
class CORDL_TYPE XRLoaderHelper : public ::UnityEngine::XR::Management::XRLoader {
public:
  // Declarations
  /// @brief Field m_SubsystemInstanceMap, offset 0x18, size 0x8
  __declspec(property(get = __get_m_SubsystemInstanceMap,
                      put = __set_m_SubsystemInstanceMap))::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* m_SubsystemInstanceMap;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>*& __get_m_SubsystemInstanceMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>*> const& __get_m_SubsystemInstanceMap() const;

  constexpr void __set_m_SubsystemInstanceMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* value);

  /// @brief Method GetLoadedSubsystem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline T GetLoadedSubsystem();

  /// @brief Method StartSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StartSubsystem();

  /// @brief Method StopSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StopSubsystem();

  /// @brief Method DestroySubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DestroySubsystem();

  /// @brief Method CreateSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method CreateIntegratedSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateIntegratedSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method CreateStandaloneSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateStandaloneSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method Deinitialize, addr 0x2c76514, size 0x58, virtual true, abstract: false, final false
  inline bool Deinitialize();

  static inline ::UnityEngine::XR::Management::XRLoaderHelper* New_ctor();

  /// @brief Method .ctor, addr 0x2c7656c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XRLoaderHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLoaderHelper(XRLoaderHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLoaderHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLoaderHelper(XRLoaderHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLoaderHelper();

public:
  /// @brief Field m_SubsystemInstanceMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* ___m_SubsystemInstanceMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRLoaderHelper, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRLoaderHelper, ___m_SubsystemInstanceMap) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRLoaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRLoaderHelper*, "UnityEngine.XR.Management", "XRLoaderHelper");
