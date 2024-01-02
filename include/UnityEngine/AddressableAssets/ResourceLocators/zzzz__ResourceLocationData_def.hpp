#pragma once
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
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13983))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14114))
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::ResourceLocationData*
class CORDL_TYPE ResourceLocationData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Keys, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Keys, put = __set_m_Keys))::ArrayW<::StringW, ::Array<::StringW>*> m_Keys;

  /// @brief Field m_InternalId, offset 0x18, size 0x8
  __declspec(property(get = __get_m_InternalId, put = __set_m_InternalId))::StringW m_InternalId;

  /// @brief Field m_Provider, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Provider, put = __set_m_Provider))::StringW m_Provider;

  /// @brief Field m_Dependencies, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Dependencies, put = __set_m_Dependencies))::ArrayW<::StringW, ::Array<::StringW>*> m_Dependencies;

  /// @brief Field m_ResourceType, offset 0x30, size 0x20
  __declspec(property(get = __get_m_ResourceType, put = __set_m_ResourceType))::UnityEngine::ResourceManagement::Util::SerializedType m_ResourceType;

  /// @brief Field SerializedData, offset 0x50, size 0x8
  __declspec(property(get = __get_SerializedData, put = __set_SerializedData))::ArrayW<uint8_t, ::Array<uint8_t>*> SerializedData;

  /// @brief Field _Data, offset 0x58, size 0x8
  __declspec(property(get = __get__Data, put = __set__Data))::System::Object* _Data;

  __declspec(property(get = get_Keys))::ArrayW<::StringW, ::Array<::StringW>*> Keys;

  __declspec(property(get = get_InternalId))::StringW InternalId;

  __declspec(property(get = get_Provider))::StringW Provider;

  __declspec(property(get = get_Dependencies))::ArrayW<::StringW, ::Array<::StringW>*> Dependencies;

  __declspec(property(get = get_ResourceType))::System::Type* ResourceType;

  __declspec(property(get = get_Data, put = set_Data))::System::Object* Data;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_Keys();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_Keys() const;

  constexpr void __set_m_Keys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __get_m_InternalId();

  constexpr ::StringW const& __get_m_InternalId() const;

  constexpr void __set_m_InternalId(::StringW value);

  constexpr ::StringW& __get_m_Provider();

  constexpr ::StringW const& __get_m_Provider() const;

  constexpr void __set_m_Provider(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_Dependencies();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_Dependencies() const;

  constexpr void __set_m_Dependencies(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::UnityEngine::ResourceManagement::Util::SerializedType& __get_m_ResourceType();

  constexpr ::UnityEngine::ResourceManagement::Util::SerializedType const& __get_m_ResourceType() const;

  constexpr void __set_m_ResourceType(::UnityEngine::ResourceManagement::Util::SerializedType value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_SerializedData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_SerializedData() const;

  constexpr void __set_SerializedData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Object*& __get__Data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__Data() const;

  constexpr void __set__Data(::System::Object* value);

  /// @brief Method get_Keys, addr 0x2a2e958, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Keys();

  /// @brief Method get_InternalId, addr 0x2a2e960, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InternalId();

  /// @brief Method get_Provider, addr 0x2a2e968, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Provider();

  /// @brief Method get_Dependencies, addr 0x2a2e970, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Dependencies();

  /// @brief Method get_ResourceType, addr 0x2a2e978, size 0xc, virtual false, abstract: false, final false
  inline ::System::Type* get_ResourceType();

  /// @brief Method get_Data, addr 0x2a2e984, size 0x40, virtual false, abstract: false, final false
  inline ::System::Object* get_Data();

  /// @brief Method set_Data, addr 0x2a2e9c4, size 0xac, virtual false, abstract: false, final false
  inline void set_Data(::System::Object* value);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> keys, ::StringW id, ::System::Type* provider,
                                                                                                   ::System::Type* t, ::ArrayW<::StringW, ::Array<::StringW>*> dependencies);

  /// @brief Method .ctor, addr 0x2a2ea70, size 0x138, virtual false, abstract: false, final false
  /// @param dependencies: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> keys, ::StringW id, ::System::Type* provider, ::System::Type* t, ::ArrayW<::StringW, ::Array<::StringW>*> dependencies = nullptr);

  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceLocationData(ResourceLocationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceLocationData(ResourceLocationData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceLocationData();

public:
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
