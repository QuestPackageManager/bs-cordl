#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ProviderLoadRequestOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProviderLoadRequestOptions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ProviderLoadRequestOptions_SerializationAdatapter;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SerializationAdatapter_ProviderLoadRequestOptions_Data;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class BinaryStorageBuffer_ISerializationAdapter_1;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_ISerializationAdapter;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_Reader;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_Writer;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ProviderLoadRequestOptions;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ProviderLoadRequestOptions_SerializationAdatapter;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SerializationAdatapter_ProviderLoadRequestOptions_Data;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*);
MARK_REF_T(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*);
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*, "UnityEngine.ResourceManagement.ResourceProviders", "ProviderLoadRequestOptions");
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*, "UnityEngine.ResourceManagement.ResourceProviders",
                    "ProviderLoadRequestOptions/SerializationAdatapter");
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data, "UnityEngine.ResourceManagement.ResourceProviders",
                    "ProviderLoadRequestOptions/SerializationAdatapter/Data");
// Dependencies
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions/SerializationAdatapter/Data
struct CORDL_TYPE SerializationAdatapter_ProviderLoadRequestOptions_Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationAdatapter_ProviderLoadRequestOptions_Data();

  // Ctor Parameters [CppParam { name: "ignoreFailures", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestTimeout", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "localCachePathOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr SerializationAdatapter_ProviderLoadRequestOptions_Data(bool ignoreFailures, int32_t requestTimeout, uint32_t localCachePathOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19210 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field ignoreFailures, offset: 0x0, size: 0x1, def value: None
  bool ignoreFailures;

  /// @brief Field requestTimeout, offset: 0x4, size: 0x4, def value: None
  int32_t requestTimeout;

  /// @brief Field localCachePathOffset, offset: 0x8, size: 0x4, def value: None
  uint32_t localCachePathOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data, ignoreFailures) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data, requestTimeout) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data, localCachePathOffset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data) == 0xc, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions/SerializationAdatapter
class CORDL_TYPE ProviderLoadRequestOptions_SerializationAdatapter : public ::System::Object {
public:
  // Declarations
  using Data = ::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data;

  __declspec(property(get = UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_get_Dependencies)) ::System::Collections::Generic::IEnumerable_1<
      ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Dependencies;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept;

  /// @brief Convert operator to
  /// "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>"
  constexpr
  operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>*() noexcept;

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter* New_ctor();

  /// @brief Method UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.Deserialize, addr 0x6d487e0, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Object* UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader,
                                                                                                                     ::System::Type* t, uint32_t offset, ::by_ref<uint32_t> size);

  /// @brief Method UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.Serialize, addr 0x6d488bc, size 0xe8, virtual true, abstract: false, final true
  inline uint32_t UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer,
                                                                                                          ::System::Object* val);

  /// @brief Method UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.get_Dependencies, addr 0x6d487d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*
  UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_get_Dependencies();

  /// @brief Method .ctor, addr 0x6d489a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>*
  i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___UnityEngine__ResourceManagement__ResourceProviders__ProviderLoadRequestOptions__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderLoadRequestOptions_SerializationAdatapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProviderLoadRequestOptions_SerializationAdatapter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderLoadRequestOptions_SerializationAdatapter(ProviderLoadRequestOptions_SerializationAdatapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderLoadRequestOptions_SerializationAdatapter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderLoadRequestOptions_SerializationAdatapter(ProviderLoadRequestOptions_SerializationAdatapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19211 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter) == 0x10, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions
class CORDL_TYPE ProviderLoadRequestOptions : public ::System::Object {
public:
  // Declarations
  using SerializationAdatapter = ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter;

  __declspec(property(get = get_IgnoreFailures, put = set_IgnoreFailures)) bool IgnoreFailures;

  __declspec(property(get = get_LocalCachePath, put = set_LocalCachePath)) ::StringW LocalCachePath;

  __declspec(property(get = get_WebRequestTimeout, put = set_WebRequestTimeout)) int32_t WebRequestTimeout;

  /// @brief Field m_IgnoreFailures, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreFailures, put = __cordl_internal_set_m_IgnoreFailures)) bool m_IgnoreFailures;

  /// @brief Field m_LocalCachePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalCachePath, put = __cordl_internal_set_m_LocalCachePath)) ::StringW m_LocalCachePath;

  /// @brief Field m_WebRequestTimeout, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WebRequestTimeout, put = __cordl_internal_set_m_WebRequestTimeout)) int32_t m_WebRequestTimeout;

  /// @brief Method Copy, addr 0x6d48724, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* Copy();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* New_ctor();

  constexpr bool const& __cordl_internal_get_m_IgnoreFailures() const;

  constexpr bool& __cordl_internal_get_m_IgnoreFailures();

  constexpr ::StringW const& __cordl_internal_get_m_LocalCachePath() const;

  constexpr ::StringW& __cordl_internal_get_m_LocalCachePath();

  constexpr int32_t const& __cordl_internal_get_m_WebRequestTimeout() const;

  constexpr int32_t& __cordl_internal_get_m_WebRequestTimeout();

  constexpr void __cordl_internal_set_m_IgnoreFailures(bool value);

  constexpr void __cordl_internal_set_m_LocalCachePath(::StringW value);

  constexpr void __cordl_internal_set_m_WebRequestTimeout(int32_t value);

  /// @brief Method .ctor, addr 0x6d487d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IgnoreFailures, addr 0x6d487a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreFailures();

  /// @brief Method get_LocalCachePath, addr 0x6d487c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalCachePath();

  /// @brief Method get_WebRequestTimeout, addr 0x6d487b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_WebRequestTimeout();

  /// @brief Method set_IgnoreFailures, addr 0x6d487ac, size 0x8, virtual false, abstract: false, final false
  inline void set_IgnoreFailures(bool value);

  /// @brief Method set_LocalCachePath, addr 0x6d487cc, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalCachePath(::StringW value);

  /// @brief Method set_WebRequestTimeout, addr 0x6d487bc, size 0x8, virtual false, abstract: false, final false
  inline void set_WebRequestTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderLoadRequestOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProviderLoadRequestOptions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderLoadRequestOptions(ProviderLoadRequestOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderLoadRequestOptions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderLoadRequestOptions(ProviderLoadRequestOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19212 };

  /// [SerializeField]
  /// @brief Field m_IgnoreFailures, offset: 0x10, size: 0x1, def value: None
  bool ___m_IgnoreFailures;

  /// [SerializeField]
  /// @brief Field m_WebRequestTimeout, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_WebRequestTimeout;

  /// [SerializeField]
  /// @brief Field m_LocalCachePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_LocalCachePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions, ___m_IgnoreFailures) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions, ___m_WebRequestTimeout) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions, ___m_LocalCachePath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions) == 0x20, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
