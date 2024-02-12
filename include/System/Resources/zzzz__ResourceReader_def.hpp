#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceReader)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class UnmanagedMemoryStream;
}
namespace System::Resources {
class IResourceReader;
}
namespace System::Resources {
struct ResourceLocator;
}
namespace System::Resources {
struct ResourceTypeCode;
}
namespace System::Resources {
class __ResourceReader__ResourceEnumerator;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
// Forward declare root types
namespace System::Resources {
class ResourceReader;
}
namespace System::Resources {
class __ResourceReader__ResourceEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::ResourceReader);
MARK_REF_PTR_T(::System::Resources::__ResourceReader__ResourceEnumerator);
// Type: ::ResourceEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3436))
// CS Name: ::ResourceReader::ResourceEnumerator*
class CORDL_TYPE __ResourceReader__ResourceEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader))::System::Resources::ResourceReader* _reader;

  /// @brief Field _currentIsValid, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__currentIsValid, put = __cordl_internal_set__currentIsValid)) bool _currentIsValid;

  /// @brief Field _currentName, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__currentName, put = __cordl_internal_set__currentName)) int32_t _currentName;

  /// @brief Field _dataPosition, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__dataPosition, put = __cordl_internal_set__dataPosition)) int32_t _dataPosition;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_DataPosition)) int32_t DataPosition;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr ::System::Resources::ResourceReader*& __cordl_internal_get__reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Resources::ResourceReader*> const& __cordl_internal_get__reader() const;

  constexpr void __cordl_internal_set__reader(::System::Resources::ResourceReader* value);

  constexpr bool& __cordl_internal_get__currentIsValid();

  constexpr bool const& __cordl_internal_get__currentIsValid() const;

  constexpr void __cordl_internal_set__currentIsValid(bool value);

  constexpr int32_t& __cordl_internal_get__currentName();

  constexpr int32_t const& __cordl_internal_get__currentName() const;

  constexpr void __cordl_internal_set__currentName(int32_t value);

  constexpr int32_t& __cordl_internal_get__dataPosition();

  constexpr int32_t const& __cordl_internal_get__dataPosition() const;

  constexpr void __cordl_internal_set__dataPosition(int32_t value);

  static inline ::System::Resources::__ResourceReader__ResourceEnumerator* New_ctor(::System::Resources::ResourceReader* reader);

  /// @brief Method .ctor, addr 0x2500c94, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Resources::ResourceReader* reader);

  /// @brief Method MoveNext, addr 0x2504028, size 0x5c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method get_Key, addr 0x2504084, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Current, addr 0x250413c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_DataPosition, addr 0x25044e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DataPosition();

  /// @brief Method get_Entry, addr 0x25041a0, size 0x344, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Value, addr 0x25044ec, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Method Reset, addr 0x250459c, size 0x8c, virtual true, abstract: false, final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceReader__ResourceEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResourceReader__ResourceEnumerator(__ResourceReader__ResourceEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceReader__ResourceEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResourceReader__ResourceEnumerator(__ResourceReader__ResourceEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceReader__ResourceEnumerator();

public:
  /// @brief Field _reader, offset: 0x10, size: 0x8, def value: None
  ::System::Resources::ResourceReader* ____reader;

  /// @brief Field _currentIsValid, offset: 0x18, size: 0x1, def value: None
  bool ____currentIsValid;

  /// @brief Field _currentName, offset: 0x1c, size: 0x4, def value: None
  int32_t ____currentName;

  /// @brief Field _dataPosition, offset: 0x20, size: 0x4, def value: None
  int32_t ____dataPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::__ResourceReader__ResourceEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Resources::__ResourceReader__ResourceEnumerator, ____reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::__ResourceReader__ResourceEnumerator, ____currentIsValid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Resources::__ResourceReader__ResourceEnumerator, ____currentName) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Resources::__ResourceReader__ResourceEnumerator, ____dataPosition) == 0x20, "Offset mismatch!");

} // namespace System::Resources
// Type: System.Resources::ResourceReader
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3437))
// CS Name: ::System.Resources::ResourceReader*
class CORDL_TYPE ResourceReader : public ::System::Object {
public:
  // Declarations
  using ResourceEnumerator = ::System::Resources::__ResourceReader__ResourceEnumerator;

  /// @brief Field _store, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__store, put = __cordl_internal_set__store))::System::IO::BinaryReader* _store;

  /// @brief Field _resCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__resCache,
                      put = __cordl_internal_set__resCache))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* _resCache;

  /// @brief Field _nameSectionOffset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nameSectionOffset, put = __cordl_internal_set__nameSectionOffset)) int64_t _nameSectionOffset;

  /// @brief Field _dataSectionOffset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSectionOffset, put = __cordl_internal_set__dataSectionOffset)) int64_t _dataSectionOffset;

  /// @brief Field _nameHashes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nameHashes, put = __cordl_internal_set__nameHashes))::ArrayW<int32_t, ::Array<int32_t>*> _nameHashes;

  /// @brief Field _nameHashesPtr, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nameHashesPtr, put = __cordl_internal_set__nameHashesPtr))::cordl_internals::Ptr<int32_t> _nameHashesPtr;

  /// @brief Field _namePositions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__namePositions, put = __cordl_internal_set__namePositions))::ArrayW<int32_t, ::Array<int32_t>*> _namePositions;

  /// @brief Field _namePositionsPtr, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__namePositionsPtr, put = __cordl_internal_set__namePositionsPtr))::cordl_internals::Ptr<int32_t> _namePositionsPtr;

  /// @brief Field _typeTable, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__typeTable, put = __cordl_internal_set__typeTable))::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> _typeTable;

  /// @brief Field _typeNamePositions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__typeNamePositions, put = __cordl_internal_set__typeNamePositions))::ArrayW<int32_t, ::Array<int32_t>*> _typeNamePositions;

  /// @brief Field _objFormatter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__objFormatter, put = __cordl_internal_set__objFormatter))::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _objFormatter;

  /// @brief Field _numResources, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__numResources, put = __cordl_internal_set__numResources)) int32_t _numResources;

  /// @brief Field _ums, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__ums, put = __cordl_internal_set__ums))::System::IO::UnmanagedMemoryStream* _ums;

  /// @brief Field _version, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Resources::IResourceReader"
  constexpr operator ::System::Resources::IResourceReader*() noexcept;

  /// @brief Convert to "::System::Resources::IResourceReader"
  constexpr ::System::Resources::IResourceReader* i___System__Resources__IResourceReader() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::System::IO::BinaryReader*& __cordl_internal_get__store();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryReader*> const& __cordl_internal_get__store() const;

  constexpr void __cordl_internal_set__store(::System::IO::BinaryReader* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& __cordl_internal_get__resCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*> const& __cordl_internal_get__resCache() const;

  constexpr void __cordl_internal_set__resCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value);

  constexpr int64_t& __cordl_internal_get__nameSectionOffset();

  constexpr int64_t const& __cordl_internal_get__nameSectionOffset() const;

  constexpr void __cordl_internal_set__nameSectionOffset(int64_t value);

  constexpr int64_t& __cordl_internal_get__dataSectionOffset();

  constexpr int64_t const& __cordl_internal_get__dataSectionOffset() const;

  constexpr void __cordl_internal_set__dataSectionOffset(int64_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__nameHashes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__nameHashes() const;

  constexpr void __cordl_internal_set__nameHashes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::cordl_internals::Ptr<int32_t>& __cordl_internal_get__nameHashesPtr();

  constexpr ::cordl_internals::Ptr<int32_t> const& __cordl_internal_get__nameHashesPtr() const;

  constexpr void __cordl_internal_set__nameHashesPtr(::cordl_internals::Ptr<int32_t> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__namePositions();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__namePositions() const;

  constexpr void __cordl_internal_set__namePositions(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::cordl_internals::Ptr<int32_t>& __cordl_internal_get__namePositionsPtr();

  constexpr ::cordl_internals::Ptr<int32_t> const& __cordl_internal_get__namePositionsPtr() const;

  constexpr void __cordl_internal_set__namePositionsPtr(::cordl_internals::Ptr<int32_t> value);

  constexpr ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>& __cordl_internal_get__typeTable();

  constexpr ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> const& __cordl_internal_get__typeTable() const;

  constexpr void __cordl_internal_set__typeTable(::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__typeNamePositions();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__typeNamePositions() const;

  constexpr void __cordl_internal_set__typeNamePositions(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*& __cordl_internal_get__objFormatter();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*> const& __cordl_internal_get__objFormatter() const;

  constexpr void __cordl_internal_set__objFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value);

  constexpr int32_t& __cordl_internal_get__numResources();

  constexpr int32_t const& __cordl_internal_get__numResources() const;

  constexpr void __cordl_internal_set__numResources(int32_t value);

  constexpr ::System::IO::UnmanagedMemoryStream*& __cordl_internal_get__ums();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::UnmanagedMemoryStream*> const& __cordl_internal_get__ums() const;

  constexpr void __cordl_internal_set__ums(::System::IO::UnmanagedMemoryStream* value);

  constexpr int32_t& __cordl_internal_get__version();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr void __cordl_internal_set__version(int32_t value);

  static inline ::System::Resources::ResourceReader* New_ctor(::System::IO::Stream* stream, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* resCache);

  /// @brief Method .ctor, addr 0x2500684, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* resCache);

  /// @brief Method Close, addr 0x25008e4, size 0x3c, virtual true, abstract: false, final true
  inline void Close();

  /// @brief Method Dispose, addr 0x2500960, size 0x3c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2500920, size 0x40, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ReadUnalignedI4, addr 0x250099c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ReadUnalignedI4(::cordl_internals::Ptr<int32_t> p);

  /// @brief Method SkipString, addr 0x25009a4, size 0xb8, virtual false, abstract: false, final false
  inline void SkipString();

  /// @brief Method GetNameHash, addr 0x2500a5c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetNameHash(int32_t index);

  /// @brief Method GetNamePosition, addr 0x2500aa0, size 0x120, virtual false, abstract: false, final false
  inline int32_t GetNamePosition(int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2500bc0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumerator, addr 0x2500bc4, size 0xd0, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetEnumeratorInternal, addr 0x2500cc8, size 0x70, virtual false, abstract: false, final false
  inline ::System::Resources::__ResourceReader__ResourceEnumerator* GetEnumeratorInternal();

  /// @brief Method FindPosForResource, addr 0x2500d38, size 0x3d4, virtual false, abstract: false, final false
  inline int32_t FindPosForResource(::StringW name);

  /// @brief Method CompareStringEqualsName, addr 0x250110c, size 0x210, virtual false, abstract: false, final false
  inline bool CompareStringEqualsName(::StringW name);

  /// @brief Method AllocateStringForNameIndex, addr 0x250131c, size 0x8f4, virtual false, abstract: false, final false
  inline ::StringW AllocateStringForNameIndex(int32_t index, ByRef<int32_t> dataOffset);

  /// @brief Method GetValueForNameIndex, addr 0x2501c10, size 0x2a8, virtual false, abstract: false, final false
  inline ::System::Object* GetValueForNameIndex(int32_t index);

  /// @brief Method LoadString, addr 0x25020b8, size 0x2b0, virtual false, abstract: false, final false
  inline ::StringW LoadString(int32_t pos);

  /// @brief Method LoadObject, addr 0x2502730, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* LoadObject(int32_t pos);

  /// @brief Method LoadObject, addr 0x250275c, size 0x98, virtual false, abstract: false, final false
  inline ::System::Object* LoadObject(int32_t pos, ByRef<::System::Resources::ResourceTypeCode> typeCode);

  /// @brief Method LoadObjectV1, addr 0x2501eb8, size 0x100, virtual false, abstract: false, final false
  inline ::System::Object* LoadObjectV1(int32_t pos);

  /// @brief Method _LoadObjectV1, addr 0x25027f4, size 0x838, virtual false, abstract: false, final false
  inline ::System::Object* _LoadObjectV1(int32_t pos);

  /// @brief Method LoadObjectV2, addr 0x2501fb8, size 0x100, virtual false, abstract: false, final false
  inline ::System::Object* LoadObjectV2(int32_t pos, ByRef<::System::Resources::ResourceTypeCode> typeCode);

  /// @brief Method _LoadObjectV2, addr 0x2503204, size 0x740, virtual false, abstract: false, final false
  inline ::System::Object* _LoadObjectV2(int32_t pos, ByRef<::System::Resources::ResourceTypeCode> typeCode);

  /// @brief Method DeserializeObject, addr 0x250302c, size 0x1d8, virtual false, abstract: false, final false
  inline ::System::Object* DeserializeObject(int32_t typeIndex);

  /// @brief Method ReadResources, addr 0x2500770, size 0x174, virtual false, abstract: false, final false
  inline void ReadResources();

  /// @brief Method _ReadResources, addr 0x2503944, size 0x6e4, virtual false, abstract: false, final false
  inline void _ReadResources();

  /// @brief Method FindType, addr 0x2502368, size 0x3c8, virtual false, abstract: false, final false
  inline ::System::RuntimeType* FindType(int32_t typeIndex);

  // Ctor Parameters [CppParam { name: "", ty: "ResourceReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceReader(ResourceReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceReader(ResourceReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceReader();

public:
  /// @brief Field _store, offset: 0x10, size: 0x8, def value: None
  ::System::IO::BinaryReader* ____store;

  /// @brief Field _resCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* ____resCache;

  /// @brief Field _nameSectionOffset, offset: 0x20, size: 0x8, def value: None
  int64_t ____nameSectionOffset;

  /// @brief Field _dataSectionOffset, offset: 0x28, size: 0x8, def value: None
  int64_t ____dataSectionOffset;

  /// @brief Field _nameHashes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____nameHashes;

  /// @brief Field _nameHashesPtr, offset: 0x38, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> ____nameHashesPtr;

  /// @brief Field _namePositions, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____namePositions;

  /// @brief Field _namePositionsPtr, offset: 0x48, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> ____namePositionsPtr;

  /// @brief Field _typeTable, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> ____typeTable;

  /// @brief Field _typeNamePositions, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____typeNamePositions;

  /// @brief Field _objFormatter, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* ____objFormatter;

  /// @brief Field _numResources, offset: 0x68, size: 0x4, def value: None
  int32_t ____numResources;

  /// @brief Field _ums, offset: 0x70, size: 0x8, def value: None
  ::System::IO::UnmanagedMemoryStream* ____ums;

  /// @brief Field _version, offset: 0x78, size: 0x4, def value: None
  int32_t ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceReader, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____store) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____resCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____nameSectionOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____dataSectionOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____nameHashes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____nameHashesPtr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____namePositions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____namePositionsPtr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____typeTable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____typeNamePositions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____objFormatter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____numResources) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____ums) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceReader, ____version) == 0x78, "Offset mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::ResourceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceReader*, "System.Resources", "ResourceReader");
NEED_NO_BOX(::System::Resources::__ResourceReader__ResourceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::__ResourceReader__ResourceEnumerator*, "System.Resources", "ResourceReader/ResourceEnumerator");
