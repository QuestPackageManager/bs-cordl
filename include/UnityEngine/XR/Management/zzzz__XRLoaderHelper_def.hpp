#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRLoaderHelper.hpp"
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
// Dependencies UnityEngine.XR.Management.XRLoader
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: UnityEngine.XR.Management.XRLoaderHelper
class CORDL_TYPE XRLoaderHelper : public ::UnityEngine::XR::Management::XRLoader {
public:
  // Declarations
  /// @brief Field m_SubsystemInstanceMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubsystemInstanceMap,
                      put = __cordl_internal_set_m_SubsystemInstanceMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* m_SubsystemInstanceMap;

  /// @brief Method CreateIntegratedSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateIntegratedSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method CreateStandaloneSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateStandaloneSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method CreateSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method Deinitialize, addr 0x4831a64, size 0x58, virtual true, abstract: false, final false
  inline bool Deinitialize();

  /// @brief Method DestroySubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DestroySubsystem();

  /// @brief Method GetLoadedSubsystem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline T GetLoadedSubsystem();

  static inline ::UnityEngine::XR::Management::XRLoaderHelper* New_ctor();

  /// @brief Method StartSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StartSubsystem();

  /// @brief Method StopSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StopSubsystem();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* const& __cordl_internal_get_m_SubsystemInstanceMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>*& __cordl_internal_get_m_SubsystemInstanceMap();

  constexpr void __cordl_internal_set_m_SubsystemInstanceMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* value);

  /// @brief Method .ctor, addr 0x4831abc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLoaderHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRLoaderHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLoaderHelper(XRLoaderHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLoaderHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLoaderHelper(XRLoaderHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18691 };

  /// @brief Field m_SubsystemInstanceMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* ___m_SubsystemInstanceMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Management::XRLoaderHelper, ___m_SubsystemInstanceMap) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRLoaderHelper, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRLoaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRLoaderHelper*, "UnityEngine.XR.Management", "XRLoaderHelper");
