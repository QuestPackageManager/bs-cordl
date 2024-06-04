#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/DynamicResourceLocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamicResourceLocator)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class DynamicResourceLocator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::DynamicResourceLocator);
// Type: UnityEngine.AddressableAssets::DynamicResourceLocator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets::DynamicResourceLocator*
class CORDL_TYPE DynamicResourceLocator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AtlasSpriteProviderId))::StringW AtlasSpriteProviderId;

  __declspec(property(get = get_Keys))::System::Collections::Generic::IEnumerable_1<::System::Object*>* Keys;

  __declspec(property(get = get_LocatorId))::StringW LocatorId;

  /// @brief Field m_Addressables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_AtlasSpriteProviderId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasSpriteProviderId, put = __cordl_internal_set_m_AtlasSpriteProviderId))::StringW m_AtlasSpriteProviderId;

  /// @brief Convert operator to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
  constexpr operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() noexcept;

  /// @brief Method CreateDynamicLocations, addr 0x307a688, size 0x68c, virtual false, abstract: false, final false
  inline void CreateDynamicLocations(::System::Type* type, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                     ::StringW locName, ::StringW subKey, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* mainLoc);

  /// @brief Method Locate, addr 0x307a13c, size 0x54c, virtual true, abstract: false, final true
  inline bool Locate(::System::Object* key, ::System::Type* type, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  static inline ::UnityEngine::AddressableAssets::DynamicResourceLocator* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get_m_Addressables() const;

  constexpr ::StringW const& __cordl_internal_get_m_AtlasSpriteProviderId() const;

  constexpr ::StringW& __cordl_internal_get_m_AtlasSpriteProviderId();

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_m_AtlasSpriteProviderId(::StringW value);

  /// @brief Method .ctor, addr 0x307a114, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  /// @brief Method get_AtlasSpriteProviderId, addr 0x3079cbc, size 0x458, virtual false, abstract: false, final false
  inline ::StringW get_AtlasSpriteProviderId();

  /// @brief Method get_Keys, addr 0x3079c78, size 0x44, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Keys();

  /// @brief Method get_LocatorId, addr 0x3079c38, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_LocatorId();

  /// @brief Convert to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* i___UnityEngine__AddressableAssets__ResourceLocators__IResourceLocator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicResourceLocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicResourceLocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicResourceLocator(DynamicResourceLocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicResourceLocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicResourceLocator(DynamicResourceLocator const&) = delete;

  /// @brief Field m_Addressables, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_AtlasSpriteProviderId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_AtlasSpriteProviderId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::DynamicResourceLocator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::DynamicResourceLocator, ___m_Addressables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::DynamicResourceLocator, ___m_AtlasSpriteProviderId) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::DynamicResourceLocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::DynamicResourceLocator*, "UnityEngine.AddressableAssets", "DynamicResourceLocator");
