#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ResourceLocationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceLocationData)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData);
// Type: UnityEngine.AddressableAssets.ResourceLocators::ResourceLocationData
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::ResourceLocationData*
class CORDL_TYPE ResourceLocationData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data, put = set_Data)) ::System::Object* Data;

  __declspec(property(get = get_Dependencies)) ::ArrayW<::StringW, ::Array<::StringW>*> Dependencies;

  __declspec(property(get = get_InternalId)) ::StringW InternalId;

  __declspec(property(get = get_Keys)) ::ArrayW<::StringW, ::Array<::StringW>*> Keys;

  __declspec(property(get = get_Provider)) ::StringW Provider;

  __declspec(property(get = get_ResourceType)) ::System::Type* ResourceType;

  /// @brief Field SerializedData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_SerializedData, put = __cordl_internal_set_SerializedData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializedData;

  /// @brief Field _Data, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Data, put = __cordl_internal_set__Data)) ::System::Object* _Data;

  /// @brief Field m_Dependencies, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dependencies, put = __cordl_internal_set_m_Dependencies)) ::ArrayW<::StringW, ::Array<::StringW>*> m_Dependencies;

  /// @brief Field m_InternalId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalId, put = __cordl_internal_set_m_InternalId)) ::StringW m_InternalId;

  /// @brief Field m_Keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Keys, put = __cordl_internal_set_m_Keys)) ::ArrayW<::StringW, ::Array<::StringW>*> m_Keys;

  /// @brief Field m_Provider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Provider, put = __cordl_internal_set_m_Provider)) ::StringW m_Provider;

  /// @brief Field m_ResourceType, offset 0x30, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ResourceType, put = __cordl_internal_set_m_ResourceType)) ::UnityEngine::ResourceManagement::Util::SerializedType m_ResourceType;

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> keys, ::StringW id, ::System::Type* provider,
                                                                                                   ::System::Type* t, ::ArrayW<::StringW, ::Array<::StringW>*> dependencies);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_SerializedData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_SerializedData();

  constexpr ::System::Object*& __cordl_internal_get__Data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Data() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_Dependencies() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_Dependencies();

  constexpr ::StringW const& __cordl_internal_get_m_InternalId() const;

  constexpr ::StringW& __cordl_internal_get_m_InternalId();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_Keys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_Keys();

  constexpr ::StringW const& __cordl_internal_get_m_Provider() const;

  constexpr ::StringW& __cordl_internal_get_m_Provider();

  constexpr ::UnityEngine::ResourceManagement::Util::SerializedType const& __cordl_internal_get_m_ResourceType() const;

  constexpr ::UnityEngine::ResourceManagement::Util::SerializedType& __cordl_internal_get_m_ResourceType();

  constexpr void __cordl_internal_set_SerializedData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__Data(::System::Object* value);

  constexpr void __cordl_internal_set_m_Dependencies(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_InternalId(::StringW value);

  constexpr void __cordl_internal_set_m_Keys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_Provider(::StringW value);

  constexpr void __cordl_internal_set_m_ResourceType(::UnityEngine::ResourceManagement::Util::SerializedType value);

  /// @brief Method .ctor, addr 0x449b6b8, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> keys, ::StringW id, ::System::Type* provider, ::System::Type* t, ::ArrayW<::StringW, ::Array<::StringW>*> dependencies);

  /// @brief Method get_Data, addr 0x449b5cc, size 0x40, virtual false, abstract: false, final false
  inline ::System::Object* get_Data();

  /// @brief Method get_Dependencies, addr 0x449b5b8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Dependencies();

  /// @brief Method get_InternalId, addr 0x449b5a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InternalId();

  /// @brief Method get_Keys, addr 0x449b5a0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Keys();

  /// @brief Method get_Provider, addr 0x449b5b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Provider();

  /// @brief Method get_ResourceType, addr 0x449b5c0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Type* get_ResourceType();

  /// @brief Method set_Data, addr 0x449b60c, size 0xac, virtual false, abstract: false, final false
  inline void set_Data(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceLocationData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceLocationData(ResourceLocationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceLocationData(ResourceLocationData const&) = delete;

  /// @brief Field m_Keys, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_Keys;

  /// @brief Field m_InternalId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_InternalId;

  /// @brief Field m_Provider, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_Provider;

  /// @brief Field m_Dependencies, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_Dependencies;

  /// @brief Field m_ResourceType, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::Util::SerializedType ___m_ResourceType;

  /// @brief Field SerializedData, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___SerializedData;

  /// @brief Field _Data, offset: 0x58, size: 0x8, def value: None
  ::System::Object* ____Data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16173 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, ___m_Keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, ___m_InternalId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, ___m_Provider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, ___m_Dependencies) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, ___m_ResourceType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, ___SerializedData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, ____Data) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*, "UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationData");
