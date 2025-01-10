#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryStorageBuffer)
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
class BinaryStorageBuffer_BuiltinTypesSerializer;
}
namespace UnityEngine::ResourceManagement::Util {
struct BinaryStorageBuffer_DynamicString;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class BinaryStorageBuffer_ISerializationAdapter_1;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_ISerializationAdapter;
}
namespace UnityEngine::ResourceManagement::Util {
struct BinaryStorageBuffer_ObjectTypeData;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_Reader;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_TypeSerializer;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_Writer;
}
namespace UnityEngine::ResourceManagement::Util {
struct BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap;
}
namespace UnityEngine::ResourceManagement::Util {
class BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0;
}
namespace UnityEngine::ResourceManagement::Util {
struct TypeSerializer_BinaryStorageBuffer_Data;
}
namespace UnityEngine::ResourceManagement::Util {
class Writer_BinaryStorageBuffer_Chunk;
}
namespace UnityEngine::ResourceManagement::Util {
struct Writer_BinaryStorageBuffer_StringParts;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_BuiltinTypesSerializer;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_ISerializationAdapter;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class BinaryStorageBuffer_ISerializationAdapter_1;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_Reader;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_TypeSerializer;
}
namespace UnityEngine::ResourceManagement::Util {
class BinaryStorageBuffer_Writer;
}
namespace UnityEngine::ResourceManagement::Util {
class BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0;
}
namespace UnityEngine::ResourceManagement::Util {
class Writer_BinaryStorageBuffer_Chunk;
}
namespace UnityEngine::ResourceManagement::Util {
struct BinaryStorageBuffer_DynamicString;
}
namespace UnityEngine::ResourceManagement::Util {
struct BinaryStorageBuffer_ObjectTypeData;
}
namespace UnityEngine::ResourceManagement::Util {
struct BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap;
}
namespace UnityEngine::ResourceManagement::Util {
struct TypeSerializer_BinaryStorageBuffer_Data;
}
namespace UnityEngine::ResourceManagement::Util {
struct Writer_BinaryStorageBuffer_StringParts;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data);
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts);
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap
struct CORDL_TYPE BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap();

  // Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "separator", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap(uint32_t stringId, char16_t separator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15604 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field stringId, offset: 0x0, size: 0x4, def value: None
  uint32_t stringId;

  /// @brief Field separator, offset: 0x4, size: 0x2, def value: None
  char16_t separator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap, stringId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap, separator) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap, 0x8>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/<>c__DisplayClass4_0
class CORDL_TYPE BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) char16_t s;

  static inline ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0* New_ctor();

  /// @brief Method <FindBestSeparator>b__0, addr 0x4792454, size 0x10, virtual false, abstract: false, final false
  inline bool _FindBestSeparator_b__0(char16_t c);

  constexpr char16_t const& __cordl_internal_get_s() const;

  constexpr char16_t& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_s(char16_t value);

  /// @brief Method .ctor, addr 0x4791fdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0(BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0(BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15605 };

  /// @brief Field s, offset: 0x10, size: 0x2, def value: None
  char16_t ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0, ___s) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ISerializationAdapter
class CORDL_TYPE BinaryStorageBuffer_ISerializationAdapter {
public:
  // Declarations
  __declspec(property(get = get_Dependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* Dependencies;

  /// @brief Method Deserialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader, ::System::Type* t, uint32_t offset);

  /// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint32_t Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer, ::System::Object* val);

  /// @brief Method get_Dependencies, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* get_Dependencies();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_ISerializationAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryStorageBuffer_ISerializationAdapter(BinaryStorageBuffer_ISerializationAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15611 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
// Dependencies UnityEngine.ResourceManagement.Util.BinaryStorageBuffer::ISerializationAdapter
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ISerializationAdapter`1<T>
class CORDL_TYPE BinaryStorageBuffer_ISerializationAdapter_1 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_ISerializationAdapter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryStorageBuffer_ISerializationAdapter_1(BinaryStorageBuffer_ISerializationAdapter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
// Dependencies System.Object, UnityEngine.Hash128, UnityEngine.ResourceManagement.Util.BinaryStorageBuffer::ISerializationAdapter,
// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer::ISerializationAdapter`1<T>
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer
class CORDL_TYPE BinaryStorageBuffer_BuiltinTypesSerializer : public ::System::Object {
public:
  // Declarations
  using ObjectToStringRemap = ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap;

  using __c__DisplayClass4_0 = ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0;

  __declspec(property(get = get_Dependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* Dependencies;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>*() noexcept;

  /// @brief Method Deserialize, addr 0x4791ab4, size 0x348, virtual true, abstract: false, final true
  inline ::System::Object* Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader, ::System::Type* t, uint32_t offset);

  /// @brief Method FindBestSeparator, addr 0x4791e24, size 0x1b8, virtual false, abstract: false, final false
  inline char16_t FindBestSeparator(::StringW str, ::ArrayW<char16_t, ::Array<char16_t>*> seps);

  static inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer* New_ctor();

  /// @brief Method Serialize, addr 0x4791fe4, size 0x44c, virtual true, abstract: false, final true
  inline uint32_t Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer, ::System::Object* val);

  /// @brief Method .ctor, addr 0x479244c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Dependencies, addr 0x4791aac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* get_Dependencies();

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>*
  i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___StringW_() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>*
  i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___UnityEngine__Hash128_() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>*
  i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_bool_() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>*
  i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_int32_t_() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>*
  i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_int64_t_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryStorageBuffer_BuiltinTypesSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_BuiltinTypesSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryStorageBuffer_BuiltinTypesSerializer(BinaryStorageBuffer_BuiltinTypesSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_BuiltinTypesSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryStorageBuffer_BuiltinTypesSerializer(BinaryStorageBuffer_BuiltinTypesSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data
struct CORDL_TYPE TypeSerializer_BinaryStorageBuffer_Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeSerializer_BinaryStorageBuffer_Data();

  // Ctor Parameters [CppParam { name: "assemblyId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "classId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TypeSerializer_BinaryStorageBuffer_Data(uint32_t assemblyId, uint32_t classId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15607 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field assemblyId, offset: 0x0, size: 0x4, def value: None
  uint32_t assemblyId;

  /// @brief Field classId, offset: 0x4, size: 0x4, def value: None
  uint32_t classId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data, assemblyId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data, classId) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data, 0x8>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies System.Object, UnityEngine.ResourceManagement.Util.BinaryStorageBuffer::ISerializationAdapter, UnityEngine.ResourceManagement.Util.BinaryStorageBuffer::ISerializationAdapter`1<T>
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer
class CORDL_TYPE BinaryStorageBuffer_TypeSerializer : public ::System::Object {
public:
  // Declarations
  using Data = ::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data;

  __declspec(property(get = get_Dependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* Dependencies;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>"
  constexpr operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>*() noexcept;

  /// @brief Method Deserialize, addr 0x479246c, size 0x1b4, virtual true, abstract: false, final true
  inline ::System::Object* Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader, ::System::Type* type, uint32_t offset);

  static inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer* New_ctor();

  /// @brief Method Serialize, addr 0x4792620, size 0x130, virtual true, abstract: false, final true
  inline uint32_t Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer, ::System::Object* val);

  /// @brief Method .ctor, addr 0x4792750, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Dependencies, addr 0x4792464, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* get_Dependencies();

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>"
  constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>*
  i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___System__Type__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryStorageBuffer_TypeSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_TypeSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryStorageBuffer_TypeSerializer(BinaryStorageBuffer_TypeSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_TypeSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryStorageBuffer_TypeSerializer(BinaryStorageBuffer_TypeSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15608 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString
struct CORDL_TYPE BinaryStorageBuffer_DynamicString {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryStorageBuffer_DynamicString();

  // Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nextId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BinaryStorageBuffer_DynamicString(uint32_t stringId, uint32_t nextId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15609 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field stringId, offset: 0x0, size: 0x4, def value: None
  uint32_t stringId;

  /// @brief Field nextId, offset: 0x4, size: 0x4, def value: None
  uint32_t nextId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString, stringId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString, nextId) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString, 0x8>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData
struct CORDL_TYPE BinaryStorageBuffer_ObjectTypeData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryStorageBuffer_ObjectTypeData();

  // Ctor Parameters [CppParam { name: "typeId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "objectId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BinaryStorageBuffer_ObjectTypeData(uint32_t typeId, uint32_t objectId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field typeId, offset: 0x0, size: 0x4, def value: None
  uint32_t typeId;

  /// @brief Field objectId, offset: 0x4, size: 0x4, def value: None
  uint32_t objectId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData, typeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData, objectId) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies System.Object, UnityEngine.ResourceManagement.Util.LRUCache`2<TKey, TValue>
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader
class CORDL_TYPE BinaryStorageBuffer_Reader : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Adapters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Adapters, put = __cordl_internal_set_m_Adapters)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* m_Adapters;

  /// @brief Field m_Buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buffer, put = __cordl_internal_set_m_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_Buffer;

  /// @brief Field m_Cache, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Cache, put = __cordl_internal_set_m_Cache)) ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> m_Cache;

  /// @brief Field stringBuilder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stringBuilder, put = __cordl_internal_set_stringBuilder)) ::System::Text::StringBuilder* stringBuilder;

  /// @brief Method AddSerializationAdapter, addr 0x4792924, size 0xc, virtual false, abstract: false, final false
  inline void AddSerializationAdapter(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* a);

  /// @brief Method GetBuffer, addr 0x4792974, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer();

  /// @brief Method Init, addr 0x4792758, size 0x1cc, virtual false, abstract: false, final false
  inline void
  Init(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
       ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
           adapters);

  static inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*
  New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
           ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
               adapters);

  static inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*
  New_ctor(::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
           ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
               adapters);

  /// @brief Method ReadAutoEncodedString, addr 0x4792f94, size 0x54, virtual false, abstract: false, final false
  inline ::StringW ReadAutoEncodedString(uint32_t id, bool cacheValue);

  /// @brief Method ReadDynamicString, addr 0x4792fe8, size 0x1a8, virtual false, abstract: false, final false
  inline ::StringW ReadDynamicString(uint32_t id, char16_t sep, bool cacheValue);

  /// @brief Method ReadObject, addr 0x4792b9c, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject(uint32_t id, bool cacheValue);

  /// @brief Method ReadObject, addr 0x4792d98, size 0x1fc, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Type* t, uint32_t id, bool cacheValue);

  /// @brief Method ReadObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ReadObject(uint32_t offset, bool cacheValue);

  /// @brief Method ReadObjectArray, addr 0x4792a60, size 0x13c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ReadObjectArray(uint32_t id, bool cacheValues);

  /// @brief Method ReadObjectArray, addr 0x4792c54, size 0x144, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ReadObjectArray(::System::Type* t, uint32_t id, bool cacheValues);

  /// @brief Method ReadObjectArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> ReadObjectArray(uint32_t id, bool cacheValues);

  /// @brief Method ReadString, addr 0x4791dfc, size 0x28, virtual false, abstract: false, final false
  inline ::StringW ReadString(uint32_t id, char16_t sep, bool cacheValue);

  /// @brief Method ReadStringInternal, addr 0x4793190, size 0x238, virtual false, abstract: false, final false
  inline ::StringW ReadStringInternal(uint32_t offset, ::System::Text::Encoding* enc, bool cacheValue);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ReadValue(uint32_t id);

  /// @brief Method ReadValueArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> ReadValueArray(uint32_t id, bool cacheValue);

  /// @brief Method TryGetCachedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetCachedValue(uint32_t offset, ::ByRef<T> val);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* const&
  __cordl_internal_get_m_Adapters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*& __cordl_internal_get_m_Adapters();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_Buffer();

  constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> const& __cordl_internal_get_m_Cache() const;

  constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*>& __cordl_internal_get_m_Cache();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_stringBuilder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilder();

  constexpr void
  __cordl_internal_set_m_Adapters(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* value);

  constexpr void __cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_Cache(::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> value);

  constexpr void __cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x4792930, size 0x44, virtual false, abstract: false, final false
  inline void
  _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
        ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
            adapters);

  /// @brief Method .ctor, addr 0x479297c, size 0xe4, virtual false, abstract: false, final false
  inline void
  _ctor(::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
        ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
            adapters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryStorageBuffer_Reader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_Reader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryStorageBuffer_Reader(BinaryStorageBuffer_Reader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_Reader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryStorageBuffer_Reader(BinaryStorageBuffer_Reader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15613 };

  /// @brief Field m_Buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_Buffer;

  /// @brief Field m_Adapters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* ___m_Adapters;

  /// @brief Field m_Cache, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> ___m_Cache;

  /// @brief Field stringBuilder, offset: 0x38, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___stringBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader, ___m_Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader, ___m_Adapters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader, ___m_Cache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader, ___stringBuilder) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader, 0x40>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk
class CORDL_TYPE Writer_BinaryStorageBuffer_Chunk : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field position, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) uint32_t position;

  static inline ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_data();

  constexpr uint32_t const& __cordl_internal_get_position() const;

  constexpr uint32_t& __cordl_internal_get_position();

  constexpr void __cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_position(uint32_t value);

  /// @brief Method .ctor, addr 0x479365c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Writer_BinaryStorageBuffer_Chunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Writer_BinaryStorageBuffer_Chunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Writer_BinaryStorageBuffer_Chunk(Writer_BinaryStorageBuffer_Chunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Writer_BinaryStorageBuffer_Chunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Writer_BinaryStorageBuffer_Chunk(Writer_BinaryStorageBuffer_Chunk const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15614 };

  /// @brief Field position, offset: 0x10, size: 0x4, def value: None
  uint32_t ___position;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/StringParts
struct CORDL_TYPE Writer_BinaryStorageBuffer_StringParts {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Writer_BinaryStorageBuffer_StringParts();

  // Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "isUnicode", ty: "bool", modifiers: "", def_value: None }]
  constexpr Writer_BinaryStorageBuffer_StringParts(::StringW str, uint32_t dataSize, bool isUnicode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15615 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field str, offset: 0x0, size: 0x8, def value: None
  ::StringW str;

  /// @brief Field dataSize, offset: 0x8, size: 0x4, def value: None
  uint32_t dataSize;

  /// @brief Field isUnicode, offset: 0xc, size: 0x1, def value: None
  bool isUnicode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts, str) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts, dataSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts, isUnicode) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer
class CORDL_TYPE BinaryStorageBuffer_Writer : public ::System::Object {
public:
  // Declarations
  using Chunk = ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk;

  using StringParts = ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts;

  __declspec(property(get = get_Length)) uint32_t Length;

  /// @brief Field chunks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_chunks,
                      put = __cordl_internal_set_chunks)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>* chunks;

  /// @brief Field defaulChunkSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_defaulChunkSize, put = __cordl_internal_set_defaulChunkSize)) uint32_t defaulChunkSize;

  /// @brief Field existingValues, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_existingValues,
                      put = __cordl_internal_set_existingValues)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* existingValues;

  /// @brief Field serializationAdapters, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_serializationAdapters, put = __cordl_internal_set_serializationAdapters)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* serializationAdapters;

  /// @brief Field totalBytes, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_totalBytes, put = __cordl_internal_set_totalBytes)) uint32_t totalBytes;

  /// @brief Method ComputeStringSize, addr 0x4794484, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ComputeStringSize(::StringW str, ::ByRef<bool> isUnicode);

  /// @brief Method FindChunkWithSpace, addr 0x4793664, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk* FindChunkWithSpace(uint32_t length);

  /// @brief Method IsUnicode, addr 0x47943e0, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsUnicode(::StringW str);

  static inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*
  New_ctor(int32_t chunkSize,
           ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
               adapters);

  /// @brief Method RecurseDynamicStringParts, addr 0x47944d8, size 0x1ec, virtual false, abstract: false, final false
  inline uint32_t RecurseDynamicStringParts(
      ::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts, ::Array<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts>*> parts,
      int32_t index, char16_t sep, uint32_t minSize);

  /// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Reserve();

  /// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Reserve(uint32_t count);

  /// @brief Method ReserveInternal, addr 0x4793994, size 0x58, virtual false, abstract: false, final false
  inline uint32_t ReserveInternal(uint32_t dataSize, bool prefixSize);

  /// @brief Method SerializeToByteArray, addr 0x4794014, size 0x24c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeToByteArray();

  /// @brief Method SerializeToStream, addr 0x4794260, size 0x180, virtual false, abstract: false, final false
  inline uint32_t SerializeToStream(::System::IO::Stream* str);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(uint32_t offset, ::ByRef<T> val);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(uint32_t offset, T val);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(uint32_t offset, ::ArrayW<T, ::Array<T>*> values, bool hashElements);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(::ByRef<T> val);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(T val);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t Write(::ArrayW<T, ::Array<T>*> values, bool hashElements);

  /// @brief Method WriteAutoEncodedString, addr 0x4793f18, size 0xa0, virtual false, abstract: false, final false
  inline uint32_t WriteAutoEncodedString(::StringW str);

  /// @brief Method WriteDynamicString, addr 0x4793db4, size 0x164, virtual false, abstract: false, final false
  inline uint32_t WriteDynamicString(::StringW str, char16_t sep);

  /// @brief Method WriteInternal, addr 0x47937e4, size 0x1b0, virtual false, abstract: false, final false
  inline uint32_t WriteInternal(::cordl_internals::Ptr<void> pData, uint32_t dataSize, bool prefixSize);

  /// @brief Method WriteInternal, addr 0x47939ec, size 0x280, virtual false, abstract: false, final false
  inline void WriteInternal(uint32_t id, ::cordl_internals::Ptr<void> pData, uint32_t dataSize, bool prefixSize);

  /// @brief Method WriteObject, addr 0x4793c6c, size 0x148, virtual false, abstract: false, final false
  inline uint32_t WriteObject(::System::Object* obj, bool serializeTypeData);

  /// @brief Method WriteObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline uint32_t WriteObjects(::System::Collections::Generic::IEnumerable_1<T>* objs, bool serizalizeTypeData);

  /// @brief Method WriteString, addr 0x4792430, size 0x1c, virtual false, abstract: false, final false
  inline uint32_t WriteString(::StringW str, char16_t sep);

  /// @brief Method WriteStringInternal, addr 0x4793fb8, size 0x5c, virtual false, abstract: false, final false
  inline uint32_t WriteStringInternal(::StringW val, ::System::Text::Encoding* enc);

  /// @brief Method WriteUnicodeString, addr 0x479444c, size 0x38, virtual false, abstract: false, final false
  inline uint32_t WriteUnicodeString(::StringW str);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>* const& __cordl_internal_get_chunks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>*& __cordl_internal_get_chunks();

  constexpr uint32_t const& __cordl_internal_get_defaulChunkSize() const;

  constexpr uint32_t& __cordl_internal_get_defaulChunkSize();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* const& __cordl_internal_get_existingValues() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>*& __cordl_internal_get_existingValues();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* const&
  __cordl_internal_get_serializationAdapters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*&
  __cordl_internal_get_serializationAdapters();

  constexpr uint32_t const& __cordl_internal_get_totalBytes() const;

  constexpr uint32_t& __cordl_internal_get_totalBytes();

  constexpr void __cordl_internal_set_chunks(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>* value);

  constexpr void __cordl_internal_set_defaulChunkSize(uint32_t value);

  constexpr void __cordl_internal_set_existingValues(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* value);

  constexpr void
  __cordl_internal_set_serializationAdapters(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* value);

  constexpr void __cordl_internal_set_totalBytes(uint32_t value);

  /// @brief Method .ctor, addr 0x47933d0, size 0x28c, virtual false, abstract: false, final false
  inline void
  _ctor(int32_t chunkSize,
        ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
            adapters);

  /// @brief Method get_Length, addr 0x47933c8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Length();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryStorageBuffer_Writer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_Writer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryStorageBuffer_Writer(BinaryStorageBuffer_Writer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryStorageBuffer_Writer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryStorageBuffer_Writer(BinaryStorageBuffer_Writer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15616 };

  /// @brief Field totalBytes, offset: 0x10, size: 0x4, def value: None
  uint32_t ___totalBytes;

  /// @brief Field defaulChunkSize, offset: 0x14, size: 0x4, def value: None
  uint32_t ___defaulChunkSize;

  /// @brief Field chunks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>* ___chunks;

  /// @brief Field existingValues, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* ___existingValues;

  /// @brief Field serializationAdapters, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* ___serializationAdapters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer, ___totalBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer, ___defaulChunkSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer, ___chunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer, ___existingValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer, ___serializationAdapters) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer
class CORDL_TYPE BinaryStorageBuffer : public ::System::Object {
public:
  // Declarations
  using BuiltinTypesSerializer = ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer;

  using DynamicString = ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString;

  using ISerializationAdapter = ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter;

  template <typename T> using ISerializationAdapter_1 = ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<T>;

  using ObjectTypeData = ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData;

  using Reader = ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader;

  using TypeSerializer = ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer;

  using Writer = ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer;

  /// @brief Method AddSerializationAdapter, addr 0x4791270, size 0x5fc, virtual false, abstract: false, final false
  static inline void
  AddSerializationAdapter(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* serializationAdapters,
                          ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* adapter, bool forceOverride);

  /// @brief Method ComputeHash, addr 0x4791258, size 0x18, virtual false, abstract: false, final false
  static inline void ComputeHash(::cordl_internals::Ptr<void> pData, uint64_t size, ::cordl_internals::Ptr<::UnityEngine::Hash128> hash);

  /// @brief Method GetSerializationAdapter, addr 0x479186c, size 0x238, virtual false, abstract: false, final false
  static inline bool
  GetSerializationAdapter(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* serializationAdapters,
                          ::System::Type* t, ::ByRef<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapter);

  static inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer* New_ctor();

  /// @brief Method .ctor, addr 0x4791aa4, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15617 };

  /// @brief Field kClearFlagsMask offset 0xffffffff size 0x4
  static constexpr uint32_t kClearFlagsMask{ static_cast<uint32_t>(0x3fffffffu) };

  /// @brief Field kDynamicStringFlag offset 0xffffffff size 0x4
  static constexpr uint32_t kDynamicStringFlag{ static_cast<uint32_t>(0x40000000u) };

  /// @brief Field kUnicodeStringFlag offset 0xffffffff size 0x4
  static constexpr uint32_t kUnicodeStringFlag{ static_cast<uint32_t>(0x80000000u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/BuiltinTypesSerializer");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/ISerializationAdapter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1, "UnityEngine.ResourceManagement.Util",
                                     "BinaryStorageBuffer/ISerializationAdapter`1");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Reader");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/TypeSerializer");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*, "UnityEngine.ResourceManagement.Util",
                       "BinaryStorageBuffer/BuiltinTypesSerializer/<>c__DisplayClass4_0");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer/Chunk");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/DynamicString");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/ObjectTypeData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap, "UnityEngine.ResourceManagement.Util",
                       "BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/TypeSerializer/Data");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer/StringParts");
