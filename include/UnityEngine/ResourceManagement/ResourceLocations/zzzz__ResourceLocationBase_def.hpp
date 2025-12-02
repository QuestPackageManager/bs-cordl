#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceLocations/ResourceLocationBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceLocationBase)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ResourceLocationBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase
class CORDL_TYPE ResourceLocationBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data, put = set_Data)) ::System::Object* Data;

  __declspec(property(get = get_Dependencies)) ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* Dependencies;

  __declspec(property(get = get_DependencyHashCode)) int32_t DependencyHashCode;

  __declspec(property(get = get_HasDependencies)) bool HasDependencies;

  __declspec(property(get = get_InternalId)) ::StringW InternalId;

  __declspec(property(get = get_PrimaryKey, put = set_PrimaryKey)) ::StringW PrimaryKey;

  __declspec(property(get = get_ProviderId)) ::StringW ProviderId;

  __declspec(property(get = get_ResourceType)) ::System::Type* ResourceType;

  /// @brief Field m_Data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::System::Object* m_Data;

  /// @brief Field m_Dependencies, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dependencies,
                      put = __cordl_internal_set_m_Dependencies)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_Dependencies;

  /// @brief Field m_DependencyHashCode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DependencyHashCode, put = __cordl_internal_set_m_DependencyHashCode)) int32_t m_DependencyHashCode;

  /// @brief Field m_HashCode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HashCode, put = __cordl_internal_set_m_HashCode)) int32_t m_HashCode;

  /// @brief Field m_Id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) ::StringW m_Id;

  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  /// @brief Field m_PrimaryKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimaryKey, put = __cordl_internal_set_m_PrimaryKey)) ::StringW m_PrimaryKey;

  /// @brief Field m_ProviderId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProviderId, put = __cordl_internal_set_m_ProviderId)) ::StringW m_ProviderId;

  /// @brief Field m_Type, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::System::Type* m_Type;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() noexcept;

  /// @brief Method ComputeDependencyHash, addr 0x6703c98, size 0x1f0, virtual false, abstract: false, final false
  inline void ComputeDependencyHash();

  /// @brief Method Hash, addr 0x6703a6c, size 0x4c, virtual true, abstract: false, final true
  inline int32_t Hash(::System::Type* t);

  static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*
  New_ctor(::StringW name, ::StringW id, ::StringW providerId, ::System::Type* t,
           ::ArrayW<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Array<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> dependencies);

  /// @brief Method ToString, addr 0x6703ab8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Object* const& __cordl_internal_get_m_Data() const;

  constexpr ::System::Object*& __cordl_internal_get_m_Data();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const& __cordl_internal_get_m_Dependencies() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_m_Dependencies();

  constexpr int32_t const& __cordl_internal_get_m_DependencyHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_DependencyHashCode();

  constexpr int32_t const& __cordl_internal_get_m_HashCode() const;

  constexpr int32_t& __cordl_internal_get_m_HashCode();

  constexpr ::StringW const& __cordl_internal_get_m_Id() const;

  constexpr ::StringW& __cordl_internal_get_m_Id();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::StringW const& __cordl_internal_get_m_PrimaryKey() const;

  constexpr ::StringW& __cordl_internal_get_m_PrimaryKey();

  constexpr ::StringW const& __cordl_internal_get_m_ProviderId() const;

  constexpr ::StringW& __cordl_internal_get_m_ProviderId();

  constexpr ::System::Type* const& __cordl_internal_get_m_Type() const;

  constexpr ::System::Type*& __cordl_internal_get_m_Type();

  constexpr void __cordl_internal_set_m_Data(::System::Object* value);

  constexpr void __cordl_internal_set_m_Dependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr void __cordl_internal_set_m_DependencyHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_HashCode(int32_t value);

  constexpr void __cordl_internal_set_m_Id(::StringW value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_PrimaryKey(::StringW value);

  constexpr void __cordl_internal_set_m_ProviderId(::StringW value);

  constexpr void __cordl_internal_set_m_Type(::System::Type* value);

  /// @brief Method .ctor, addr 0x6703ac0, size 0x1d8, virtual false, abstract: false, final false
  inline void
  _ctor(::StringW name, ::StringW id, ::StringW providerId, ::System::Type* t,
        ::ArrayW<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Array<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> dependencies);

  /// @brief Method get_Data, addr 0x6703a3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_Data();

  /// @brief Method get_Dependencies, addr 0x67039d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();

  /// @brief Method get_DependencyHashCode, addr 0x6703a5c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_DependencyHashCode();

  /// @brief Method get_HasDependencies, addr 0x67039e0, size 0x5c, virtual true, abstract: false, final true
  inline bool get_HasDependencies();

  /// @brief Method get_InternalId, addr 0x67039c8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_InternalId();

  /// @brief Method get_PrimaryKey, addr 0x6703a4c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_PrimaryKey();

  /// @brief Method get_ProviderId, addr 0x67039d0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ProviderId();

  /// @brief Method get_ResourceType, addr 0x6703a64, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_ResourceType();

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* i___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation() noexcept;

  /// @brief Method set_Data, addr 0x6703a44, size 0x8, virtual false, abstract: false, final false
  inline void set_Data(::System::Object* value);

  /// @brief Method set_PrimaryKey, addr 0x6703a54, size 0x8, virtual false, abstract: false, final false
  inline void set_PrimaryKey(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceLocationBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceLocationBase(ResourceLocationBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceLocationBase(ResourceLocationBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18751 };

  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_Id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Id;

  /// @brief Field m_ProviderId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_ProviderId;

  /// @brief Field m_Data, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___m_Data;

  /// @brief Field m_DependencyHashCode, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_DependencyHashCode;

  /// @brief Field m_HashCode, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_HashCode;

  /// @brief Field m_Type, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ___m_Type;

  /// @brief Field m_Dependencies, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___m_Dependencies;

  /// @brief Field m_PrimaryKey, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_PrimaryKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_Id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_ProviderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_Data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_DependencyHashCode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_HashCode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_Type) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_Dependencies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, ___m_PrimaryKey) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, 0x50>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceLocations
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*, "UnityEngine.ResourceManagement.ResourceLocations", "ResourceLocationBase");
