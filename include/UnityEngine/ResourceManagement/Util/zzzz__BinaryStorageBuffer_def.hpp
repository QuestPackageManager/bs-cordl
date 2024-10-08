#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryStorageBuffer)
namespace GlobalNamespace {
struct __BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap;
}
namespace GlobalNamespace {
class __BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0;
}
namespace GlobalNamespace {
struct __BinaryStorageBuffer__TypeSerializer__Data;
}
namespace GlobalNamespace {
class __BinaryStorageBuffer__Writer__Chunk;
}
namespace GlobalNamespace {
struct __BinaryStorageBuffer__Writer__StringParts;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__BuiltinTypesSerializer;
}
namespace UnityEngine::ResourceManagement::Util {
struct __BinaryStorageBuffer__DynamicString;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class __BinaryStorageBuffer__ISerializationAdapter_1;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__ISerializationAdapter;
}
namespace UnityEngine::ResourceManagement::Util {
struct __BinaryStorageBuffer__ObjectTypeData;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__Reader;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__TypeSerializer;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__Writer;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace GlobalNamespace {
class __BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __BinaryStorageBuffer__Writer__Chunk;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__BuiltinTypesSerializer;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__ISerializationAdapter;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class __BinaryStorageBuffer__ISerializationAdapter_1;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__Reader;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__TypeSerializer;
}
namespace UnityEngine::ResourceManagement::Util {
class __BinaryStorageBuffer__Writer;
}
namespace GlobalNamespace {
struct __BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap;
}
namespace GlobalNamespace {
struct __BinaryStorageBuffer__TypeSerializer__Data;
}
namespace GlobalNamespace {
struct __BinaryStorageBuffer__Writer__StringParts;
}
namespace UnityEngine::ResourceManagement::Util {
struct __BinaryStorageBuffer__DynamicString;
}
namespace UnityEngine::ResourceManagement::Util {
struct __BinaryStorageBuffer__ObjectTypeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer);
MARK_VAL_T(::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap);
MARK_VAL_T(::GlobalNamespace::__BinaryStorageBuffer__TypeSerializer__Data);
MARK_VAL_T(::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__DynamicString);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ObjectTypeData);
// Type: ::ObjectToStringRemap
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 22, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BinaryStorageBuffer::BuiltinTypesSerializer::ObjectToStringRemap
struct CORDL_TYPE __BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap();

  // Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "separator", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr __BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap(uint32_t stringId, char16_t separator) noexcept;

  /// @brief Field stringId, offset: 0x0, size: 0x4, def value: None
  uint32_t stringId;

  /// @brief Field separator, offset: 0x4, size: 0x2, def value: None
  char16_t separator;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15561 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap, stringId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap, separator) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BinaryStorageBuffer::BuiltinTypesSerializer::<>c__DisplayClass4_0*
class CORDL_TYPE __BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) char16_t s;

  static inline ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0* New_ctor();

  /// @brief Method <FindBestSeparator>b__0, addr 0x471ca28, size 0x10, virtual false, abstract: false, final false
  inline bool _FindBestSeparator_b__0(char16_t c);

  constexpr char16_t const& __cordl_internal_get_s() const;

  constexpr char16_t& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_s(char16_t value);

  /// @brief Method .ctor, addr 0x471c5b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0(__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0(__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0 const&) = delete;

  /// @brief Field s, offset: 0x10, size: 0x2, def value: None
  char16_t ___s;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0, ___s) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BuiltinTypesSerializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::BinaryStorageBuffer::BuiltinTypesSerializer*
class CORDL_TYPE __BinaryStorageBuffer__BuiltinTypesSerializer : public ::System::Object {
public:
  // Declarations
  using ObjectToStringRemap = ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0;

  __declspec(property(get = get_Dependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* Dependencies;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>*() noexcept;

  /// @brief Method Deserialize, addr 0x471c088, size 0x348, virtual true, abstract: false, final true
  inline ::System::Object* Deserialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* reader, ::System::Type* t, uint32_t offset);

  /// @brief Method FindBestSeparator, addr 0x471c3f8, size 0x1b8, virtual false, abstract: false, final false
  inline char16_t FindBestSeparator(::StringW str, ::ArrayW<char16_t, ::Array<char16_t>*> seps);

  static inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer* New_ctor();

  /// @brief Method Serialize, addr 0x471c5b8, size 0x44c, virtual true, abstract: false, final true
  inline uint32_t Serialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer* writer, ::System::Object* val);

  /// @brief Method .ctor, addr 0x471ca20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Dependencies, addr 0x471c080, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* get_Dependencies();

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter* i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>*
  i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1___StringW_() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>*
  i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1___UnityEngine__Hash128_() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>*
  i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1_bool_() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>*
  i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1_int32_t_() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>*
  i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1_int64_t_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__BuiltinTypesSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__BuiltinTypesSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryStorageBuffer__BuiltinTypesSerializer(__BinaryStorageBuffer__BuiltinTypesSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__BuiltinTypesSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryStorageBuffer__BuiltinTypesSerializer(__BinaryStorageBuffer__BuiltinTypesSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15563 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Type: ::Data
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BinaryStorageBuffer::TypeSerializer::Data
struct CORDL_TYPE __BinaryStorageBuffer__TypeSerializer__Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__TypeSerializer__Data();

  // Ctor Parameters [CppParam { name: "assemblyId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "classId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __BinaryStorageBuffer__TypeSerializer__Data(uint32_t assemblyId, uint32_t classId) noexcept;

  /// @brief Field assemblyId, offset: 0x0, size: 0x4, def value: None
  uint32_t assemblyId;

  /// @brief Field classId, offset: 0x4, size: 0x4, def value: None
  uint32_t classId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15564 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BinaryStorageBuffer__TypeSerializer__Data, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__TypeSerializer__Data, assemblyId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__TypeSerializer__Data, classId) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TypeSerializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::BinaryStorageBuffer::TypeSerializer*
class CORDL_TYPE __BinaryStorageBuffer__TypeSerializer : public ::System::Object {
public:
  // Declarations
  using Data = ::GlobalNamespace::__BinaryStorageBuffer__TypeSerializer__Data;

  __declspec(property(get = get_Dependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* Dependencies;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>*() noexcept;

  /// @brief Method Deserialize, addr 0x471ca40, size 0x1b4, virtual true, abstract: false, final true
  inline ::System::Object* Deserialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* reader, ::System::Type* type, uint32_t offset);

  static inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer* New_ctor();

  /// @brief Method Serialize, addr 0x471cbf4, size 0x130, virtual true, abstract: false, final true
  inline uint32_t Serialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer* writer, ::System::Object* val);

  /// @brief Method .ctor, addr 0x471cd24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Dependencies, addr 0x471ca38, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* get_Dependencies();

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter* i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>*
  i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1___System__Type__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__TypeSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__TypeSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryStorageBuffer__TypeSerializer(__BinaryStorageBuffer__TypeSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__TypeSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryStorageBuffer__TypeSerializer(__BinaryStorageBuffer__TypeSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15565 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Type: ::DynamicString
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: ::BinaryStorageBuffer::DynamicString
struct CORDL_TYPE __BinaryStorageBuffer__DynamicString {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__DynamicString();

  // Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nextId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __BinaryStorageBuffer__DynamicString(uint32_t stringId, uint32_t nextId) noexcept;

  /// @brief Field stringId, offset: 0x0, size: 0x4, def value: None
  uint32_t stringId;

  /// @brief Field nextId, offset: 0x4, size: 0x4, def value: None
  uint32_t nextId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__DynamicString, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__DynamicString, stringId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__DynamicString, nextId) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Type: ::ObjectTypeData
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: ::BinaryStorageBuffer::ObjectTypeData
struct CORDL_TYPE __BinaryStorageBuffer__ObjectTypeData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__ObjectTypeData();

  // Ctor Parameters [CppParam { name: "typeId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "objectId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __BinaryStorageBuffer__ObjectTypeData(uint32_t typeId, uint32_t objectId) noexcept;

  /// @brief Field typeId, offset: 0x0, size: 0x4, def value: None
  uint32_t typeId;

  /// @brief Field objectId, offset: 0x4, size: 0x4, def value: None
  uint32_t objectId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15567 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ObjectTypeData, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ObjectTypeData, typeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ObjectTypeData, objectId) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Type: ::ISerializationAdapter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::BinaryStorageBuffer::ISerializationAdapter*
class CORDL_TYPE __BinaryStorageBuffer__ISerializationAdapter {
public:
  // Declarations
  __declspec(property(get = get_Dependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* Dependencies;

  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Deserialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* reader, ::System::Type* t, uint32_t offset);

  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t Serialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer* writer, ::System::Object* val);

  /// @brief Method get_Dependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* get_Dependencies();

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__ISerializationAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryStorageBuffer__ISerializationAdapter(__BinaryStorageBuffer__ISerializationAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__ISerializationAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryStorageBuffer__ISerializationAdapter(__BinaryStorageBuffer__ISerializationAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
// Type: ::ISerializationAdapter`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BinaryStorageBuffer::ISerializationAdapter`1<T>*
class CORDL_TYPE __BinaryStorageBuffer__ISerializationAdapter_1 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
  constexpr operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
  constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter* i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__ISerializationAdapter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryStorageBuffer__ISerializationAdapter_1(__BinaryStorageBuffer__ISerializationAdapter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__ISerializationAdapter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryStorageBuffer__ISerializationAdapter_1(__BinaryStorageBuffer__ISerializationAdapter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15569 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
// Type: ::Reader
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::BinaryStorageBuffer::Reader*
class CORDL_TYPE __BinaryStorageBuffer__Reader : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Adapters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Adapters, put = __cordl_internal_set_m_Adapters)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* m_Adapters;

  /// @brief Field m_Buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buffer, put = __cordl_internal_set_m_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_Buffer;

  /// @brief Field m_Cache, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Cache, put = __cordl_internal_set_m_Cache)) ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> m_Cache;

  /// @brief Field stringBuilder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stringBuilder, put = __cordl_internal_set_stringBuilder)) ::System::Text::StringBuilder* stringBuilder;

  /// @brief Method AddSerializationAdapter, addr 0x471cef8, size 0xc, virtual false, abstract: false, final false
  inline void AddSerializationAdapter(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter* a);

  /// @brief Method GetBuffer, addr 0x471cf48, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer();

  /// @brief Method Init, addr 0x471cd2c, size 0x1cc, virtual false, abstract: false, final false
  inline void Init(
      ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
      ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
          adapters);

  static inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* New_ctor(
      ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
      ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
          adapters);

  static inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* New_ctor(
      ::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
      ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
          adapters);

  /// @brief Method ReadAutoEncodedString, addr 0x471d568, size 0x54, virtual false, abstract: false, final false
  inline ::StringW ReadAutoEncodedString(uint32_t id, bool cacheValue);

  /// @brief Method ReadDynamicString, addr 0x471d5bc, size 0x1a8, virtual false, abstract: false, final false
  inline ::StringW ReadDynamicString(uint32_t id, char16_t sep, bool cacheValue);

  /// @brief Method ReadObject, addr 0x471d170, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject(uint32_t id, bool cacheValue);

  /// @brief Method ReadObject, addr 0x471d36c, size 0x1fc, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Type* t, uint32_t id, bool cacheValue);

  /// @brief Method ReadObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ReadObject(uint32_t offset, bool cacheValue);

  /// @brief Method ReadObjectArray, addr 0x471d034, size 0x13c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ReadObjectArray(uint32_t id, bool cacheValues);

  /// @brief Method ReadObjectArray, addr 0x471d228, size 0x144, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ReadObjectArray(::System::Type* t, uint32_t id, bool cacheValues);

  /// @brief Method ReadObjectArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> ReadObjectArray(uint32_t id, bool cacheValues);

  /// @brief Method ReadString, addr 0x471c3d0, size 0x28, virtual false, abstract: false, final false
  inline ::StringW ReadString(uint32_t id, char16_t sep, bool cacheValue);

  /// @brief Method ReadStringInternal, addr 0x471d764, size 0x238, virtual false, abstract: false, final false
  inline ::StringW ReadStringInternal(uint32_t offset, ::System::Text::Encoding* enc, bool cacheValue);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ReadValue(uint32_t id);

  /// @brief Method ReadValueArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> ReadValueArray(uint32_t id, bool cacheValue);

  /// @brief Method TryGetCachedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetCachedValue(uint32_t offset, ByRef<T> val);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*& __cordl_internal_get_m_Adapters();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*> const&
  __cordl_internal_get_m_Adapters() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_Buffer();

  constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> const& __cordl_internal_get_m_Cache() const;

  constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*>& __cordl_internal_get_m_Cache();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_stringBuilder() const;

  constexpr void
  __cordl_internal_set_m_Adapters(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* value);

  constexpr void __cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_Cache(::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> value);

  constexpr void __cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x471cf04, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(
      ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
      ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
          adapters);

  /// @brief Method .ctor, addr 0x471cf50, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(
      ::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
      ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
          adapters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__Reader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__Reader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryStorageBuffer__Reader(__BinaryStorageBuffer__Reader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__Reader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryStorageBuffer__Reader(__BinaryStorageBuffer__Reader const&) = delete;

  /// @brief Field m_Buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_Buffer;

  /// @brief Field m_Adapters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* ___m_Adapters;

  /// @brief Field m_Cache, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> ___m_Cache;

  /// @brief Field stringBuilder, offset: 0x38, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___stringBuilder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15570 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader, ___m_Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader, ___m_Adapters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader, ___m_Cache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader, ___stringBuilder) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Type: ::Chunk
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BinaryStorageBuffer::Writer::Chunk*
class CORDL_TYPE __BinaryStorageBuffer__Writer__Chunk : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field position, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) uint32_t position;

  static inline ::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_data();

  constexpr uint32_t const& __cordl_internal_get_position() const;

  constexpr uint32_t& __cordl_internal_get_position();

  constexpr void __cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_position(uint32_t value);

  /// @brief Method .ctor, addr 0x471dc30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__Writer__Chunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__Writer__Chunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryStorageBuffer__Writer__Chunk(__BinaryStorageBuffer__Writer__Chunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__Writer__Chunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryStorageBuffer__Writer__Chunk(__BinaryStorageBuffer__Writer__Chunk const&) = delete;

  /// @brief Field position, offset: 0x10, size: 0x4, def value: None
  uint32_t ___position;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk, ___data) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StringParts
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 29, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BinaryStorageBuffer::Writer::StringParts
struct CORDL_TYPE __BinaryStorageBuffer__Writer__StringParts {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__Writer__StringParts();

  // Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "isUnicode", ty: "bool", modifiers: "", def_value: None }]
  constexpr __BinaryStorageBuffer__Writer__StringParts(::StringW str, uint32_t dataSize, bool isUnicode) noexcept;

  /// @brief Field str, offset: 0x0, size: 0x8, def value: None
  ::StringW str;

  /// @brief Field dataSize, offset: 0x8, size: 0x4, def value: None
  uint32_t dataSize;

  /// @brief Field isUnicode, offset: 0xc, size: 0x1, def value: None
  bool isUnicode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, str) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, dataSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, isUnicode) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Writer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::BinaryStorageBuffer::Writer*
class CORDL_TYPE __BinaryStorageBuffer__Writer : public ::System::Object {
public:
  // Declarations
  using Chunk = ::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk;

  using StringParts = ::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts;

  __declspec(property(get = get_Length)) uint32_t Length;

  /// @brief Field chunks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_chunks, put = __cordl_internal_set_chunks)) ::System::Collections::Generic::List_1<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>* chunks;

  /// @brief Field defaulChunkSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_defaulChunkSize, put = __cordl_internal_set_defaulChunkSize)) uint32_t defaulChunkSize;

  /// @brief Field existingValues, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_existingValues,
                      put = __cordl_internal_set_existingValues)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* existingValues;

  /// @brief Field serializationAdapters, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_serializationAdapters, put = __cordl_internal_set_serializationAdapters)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* serializationAdapters;

  /// @brief Field totalBytes, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_totalBytes, put = __cordl_internal_set_totalBytes)) uint32_t totalBytes;

  /// @brief Method ComputeStringSize, addr 0x471ea58, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ComputeStringSize(::StringW str, ByRef<bool> isUnicode);

  /// @brief Method FindChunkWithSpace, addr 0x471dc38, size 0x180, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk* FindChunkWithSpace(uint32_t length);

  /// @brief Method IsUnicode, addr 0x471e9b4, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsUnicode(::StringW str);

  static inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer* New_ctor(
      int32_t chunkSize,
      ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
          adapters);

  /// @brief Method RecurseDynamicStringParts, addr 0x471eaac, size 0x1ec, virtual false, abstract: false, final false
  inline uint32_t RecurseDynamicStringParts(::ArrayW<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, ::Array<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts>*> parts,
                                            int32_t index, char16_t sep, uint32_t minSize);

  /// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Reserve();

  /// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Reserve(uint32_t count);

  /// @brief Method ReserveInternal, addr 0x471df68, size 0x58, virtual false, abstract: false, final false
  inline uint32_t ReserveInternal(uint32_t dataSize, bool prefixSize);

  /// @brief Method SerializeToByteArray, addr 0x471e5e8, size 0x24c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeToByteArray();

  /// @brief Method SerializeToStream, addr 0x471e834, size 0x180, virtual false, abstract: false, final false
  inline uint32_t SerializeToStream(::System::IO::Stream* str);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(uint32_t offset, ByRef<T> val);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(uint32_t offset, T val);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(uint32_t offset, ::ArrayW<T, ::Array<T>*> values, bool hashElements);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(ByRef<T> val);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(T val);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(::ArrayW<T, ::Array<T>*> values, bool hashElements);

  /// @brief Method WriteAutoEncodedString, addr 0x471e4ec, size 0xa0, virtual false, abstract: false, final false
  inline uint32_t WriteAutoEncodedString(::StringW str);

  /// @brief Method WriteDynamicString, addr 0x471e388, size 0x164, virtual false, abstract: false, final false
  inline uint32_t WriteDynamicString(::StringW str, char16_t sep);

  /// @brief Method WriteInternal, addr 0x471ddb8, size 0x1b0, virtual false, abstract: false, final false
  inline uint32_t WriteInternal(::cordl_internals::Ptr<void> pData, uint32_t dataSize, bool prefixSize);

  /// @brief Method WriteInternal, addr 0x471dfc0, size 0x280, virtual false, abstract: false, final false
  inline void WriteInternal(uint32_t id, ::cordl_internals::Ptr<void> pData, uint32_t dataSize, bool prefixSize);

  /// @brief Method WriteObject, addr 0x471e240, size 0x148, virtual false, abstract: false, final false
  inline uint32_t WriteObject(::System::Object* obj, bool serializeTypeData);

  /// @brief Method WriteObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t WriteObjects(::System::Collections::Generic::IEnumerable_1<T>* objs, bool serizalizeTypeData);

  /// @brief Method WriteString, addr 0x471ca04, size 0x1c, virtual false, abstract: false, final false
  inline uint32_t WriteString(::StringW str, char16_t sep);

  /// @brief Method WriteStringInternal, addr 0x471e58c, size 0x5c, virtual false, abstract: false, final false
  inline uint32_t WriteStringInternal(::StringW val, ::System::Text::Encoding* enc);

  /// @brief Method WriteUnicodeString, addr 0x471ea20, size 0x38, virtual false, abstract: false, final false
  inline uint32_t WriteUnicodeString(::StringW str);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>*& __cordl_internal_get_chunks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>*> const& __cordl_internal_get_chunks() const;

  constexpr uint32_t const& __cordl_internal_get_defaulChunkSize() const;

  constexpr uint32_t& __cordl_internal_get_defaulChunkSize();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>*& __cordl_internal_get_existingValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>*> const& __cordl_internal_get_existingValues() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*&
  __cordl_internal_get_serializationAdapters();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*> const&
  __cordl_internal_get_serializationAdapters() const;

  constexpr uint32_t const& __cordl_internal_get_totalBytes() const;

  constexpr uint32_t& __cordl_internal_get_totalBytes();

  constexpr void __cordl_internal_set_chunks(::System::Collections::Generic::List_1<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>* value);

  constexpr void __cordl_internal_set_defaulChunkSize(uint32_t value);

  constexpr void __cordl_internal_set_existingValues(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* value);

  constexpr void __cordl_internal_set_serializationAdapters(
      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* value);

  constexpr void __cordl_internal_set_totalBytes(uint32_t value);

  /// @brief Method .ctor, addr 0x471d9a4, size 0x28c, virtual false, abstract: false, final false
  inline void _ctor(
      int32_t chunkSize,
      ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
          adapters);

  /// @brief Method get_Length, addr 0x471d99c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Length();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryStorageBuffer__Writer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__Writer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryStorageBuffer__Writer(__BinaryStorageBuffer__Writer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryStorageBuffer__Writer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryStorageBuffer__Writer(__BinaryStorageBuffer__Writer const&) = delete;

  /// @brief Field totalBytes, offset: 0x10, size: 0x4, def value: None
  uint32_t ___totalBytes;

  /// @brief Field defaulChunkSize, offset: 0x14, size: 0x4, def value: None
  uint32_t ___defaulChunkSize;

  /// @brief Field chunks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>* ___chunks;

  /// @brief Field existingValues, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* ___existingValues;

  /// @brief Field serializationAdapters, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* ___serializationAdapters;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15573 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer, ___totalBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer, ___defaulChunkSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer, ___chunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer, ___existingValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer, ___serializationAdapters) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Type: UnityEngine.ResourceManagement.Util::BinaryStorageBuffer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Util::BinaryStorageBuffer*
class CORDL_TYPE BinaryStorageBuffer : public ::System::Object {
public:
  // Declarations
  using BuiltinTypesSerializer = ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer;

  using DynamicString = ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__DynamicString;

  using ISerializationAdapter = ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter;

  template <typename T> using ISerializationAdapter_1 = ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<T>;

  using ObjectTypeData = ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ObjectTypeData;

  using Reader = ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader;

  using TypeSerializer = ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer;

  using Writer = ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer;

  /// @brief Method AddSerializationAdapter, addr 0x471b844, size 0x5fc, virtual false, abstract: false, final false
  static inline void
  AddSerializationAdapter(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* serializationAdapters,
                          ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter* adapter, bool forceOverride);

  /// @brief Method ComputeHash, addr 0x471b82c, size 0x18, virtual false, abstract: false, final false
  static inline void ComputeHash(::cordl_internals::Ptr<void> pData, uint64_t size, ::cordl_internals::Ptr<::UnityEngine::Hash128> hash);

  /// @brief Method GetSerializationAdapter, addr 0x471be40, size 0x238, virtual false, abstract: false, final false
  static inline bool
  GetSerializationAdapter(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* serializationAdapters,
                          ::System::Type* t, ByRef<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*> adapter);

  static inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer* New_ctor();

  /// @brief Method .ctor, addr 0x471c078, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryStorageBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryStorageBuffer(BinaryStorageBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryStorageBuffer(BinaryStorageBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15574 };

  /// @brief Field kClearFlagsMask offset 0xffffffff size 0x4
  static constexpr uint32_t kClearFlagsMask{ static_cast<uint32_t>(0xfffffff0u) };

  /// @brief Field kDynamicStringFlag offset 0xffffffff size 0x4
  static constexpr uint32_t kDynamicStringFlag{ static_cast<uint32_t>(0xf0u) };

  /// @brief Field kUnicodeStringFlag offset 0xffffffff size 0x4
  static constexpr uint32_t kUnicodeStringFlag{ static_cast<uint32_t>(0xf0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0*, "UnityEngine.ResourceManagement.Util",
                       "BinaryStorageBuffer/BuiltinTypesSerializer/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer/Chunk");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/BuiltinTypesSerializer");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/ISerializationAdapter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1, "UnityEngine.ResourceManagement.Util",
                                     "BinaryStorageBuffer/ISerializationAdapter`1");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Reader");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/TypeSerializer");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap, "UnityEngine.ResourceManagement.Util",
                       "BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BinaryStorageBuffer__TypeSerializer__Data, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/TypeSerializer/Data");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer/StringParts");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__DynamicString, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/DynamicString");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ObjectTypeData, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/ObjectTypeData");
