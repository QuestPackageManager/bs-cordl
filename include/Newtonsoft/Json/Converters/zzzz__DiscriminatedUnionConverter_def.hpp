#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/DiscriminatedUnionConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiscriminatedUnionConverter)
namespace Newtonsoft::Json::Converters {
class __DiscriminatedUnionConverter__UnionCase;
}
namespace Newtonsoft::Json::Converters {
class __DiscriminatedUnionConverter__Union;
}
namespace Newtonsoft::Json::Converters {
class __DiscriminatedUnionConverter____c__DisplayClass8_0;
}
namespace Newtonsoft::Json::Converters {
class __DiscriminatedUnionConverter____c__DisplayClass9_0;
}
namespace Newtonsoft::Json::Utilities {
class FSharpFunction;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class DiscriminatedUnionConverter;
}
namespace Newtonsoft::Json::Converters {
class __DiscriminatedUnionConverter__Union;
}
namespace Newtonsoft::Json::Converters {
class __DiscriminatedUnionConverter__UnionCase;
}
namespace Newtonsoft::Json::Converters {
class __DiscriminatedUnionConverter____c__DisplayClass8_0;
}
namespace Newtonsoft::Json::Converters {
class __DiscriminatedUnionConverter____c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter);
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union);
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase);
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass8_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass9_0);
// Type: ::Union
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::DiscriminatedUnionConverter::Union*
class CORDL_TYPE __DiscriminatedUnionConverter__Union : public ::System::Object {
public:
  // Declarations
  /// @brief Field Cases, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Cases,
                      put = __cordl_internal_set_Cases))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*>* Cases;

  /// @brief Field TagReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TagReader, put = __cordl_internal_set_TagReader))::Newtonsoft::Json::Utilities::FSharpFunction* TagReader;

  static inline ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union*
  New_ctor(::Newtonsoft::Json::Utilities::FSharpFunction* tagReader, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*>* cases);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*>*& __cordl_internal_get_Cases();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*>*> const&
  __cordl_internal_get_Cases() const;

  constexpr ::Newtonsoft::Json::Utilities::FSharpFunction*& __cordl_internal_get_TagReader();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::FSharpFunction*> const& __cordl_internal_get_TagReader() const;

  constexpr void __cordl_internal_set_Cases(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*>* value);

  constexpr void __cordl_internal_set_TagReader(::Newtonsoft::Json::Utilities::FSharpFunction* value);

  /// @brief Method .ctor, addr 0x2ab8664, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Utilities::FSharpFunction* tagReader, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*>* cases);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiscriminatedUnionConverter__Union();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiscriminatedUnionConverter__Union", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiscriminatedUnionConverter__Union(__DiscriminatedUnionConverter__Union&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiscriminatedUnionConverter__Union", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiscriminatedUnionConverter__Union(__DiscriminatedUnionConverter__Union const&) = delete;

  /// @brief Field TagReader, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::FSharpFunction* ___TagReader;

  /// @brief Field Cases, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*>* ___Cases;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union, ___TagReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union, ___Cases) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
// Type: ::UnionCase
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::DiscriminatedUnionConverter::UnionCase*
class CORDL_TYPE __DiscriminatedUnionConverter__UnionCase : public ::System::Object {
public:
  // Declarations
  /// @brief Field Constructor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Constructor, put = __cordl_internal_set_Constructor))::Newtonsoft::Json::Utilities::FSharpFunction* Constructor;

  /// @brief Field FieldReader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_FieldReader, put = __cordl_internal_set_FieldReader))::Newtonsoft::Json::Utilities::FSharpFunction* FieldReader;

  /// @brief Field Fields, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Fields, put = __cordl_internal_set_Fields))::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> Fields;

  /// @brief Field Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  /// @brief Field Tag, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Tag, put = __cordl_internal_set_Tag)) int32_t Tag;

  static inline ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase* New_ctor(int32_t tag, ::StringW name,
                                                                                                   ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> fields,
                                                                                                   ::Newtonsoft::Json::Utilities::FSharpFunction* fieldReader,
                                                                                                   ::Newtonsoft::Json::Utilities::FSharpFunction* constructor);

  constexpr ::Newtonsoft::Json::Utilities::FSharpFunction*& __cordl_internal_get_Constructor();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::FSharpFunction*> const& __cordl_internal_get_Constructor() const;

  constexpr ::Newtonsoft::Json::Utilities::FSharpFunction*& __cordl_internal_get_FieldReader();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::FSharpFunction*> const& __cordl_internal_get_FieldReader() const;

  constexpr ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> const& __cordl_internal_get_Fields() const;

  constexpr ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*>& __cordl_internal_get_Fields();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr int32_t const& __cordl_internal_get_Tag() const;

  constexpr int32_t& __cordl_internal_get_Tag();

  constexpr void __cordl_internal_set_Constructor(::Newtonsoft::Json::Utilities::FSharpFunction* value);

  constexpr void __cordl_internal_set_FieldReader(::Newtonsoft::Json::Utilities::FSharpFunction* value);

  constexpr void __cordl_internal_set_Fields(::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Tag(int32_t value);

  /// @brief Method .ctor, addr 0x2ab8690, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(int32_t tag, ::StringW name, ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> fields,
                    ::Newtonsoft::Json::Utilities::FSharpFunction* fieldReader, ::Newtonsoft::Json::Utilities::FSharpFunction* constructor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiscriminatedUnionConverter__UnionCase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiscriminatedUnionConverter__UnionCase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiscriminatedUnionConverter__UnionCase(__DiscriminatedUnionConverter__UnionCase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiscriminatedUnionConverter__UnionCase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiscriminatedUnionConverter__UnionCase(__DiscriminatedUnionConverter__UnionCase const&) = delete;

  /// @brief Field Tag, offset: 0x10, size: 0x4, def value: None
  int32_t ___Tag;

  /// @brief Field Name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Fields, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> ___Fields;

  /// @brief Field FieldReader, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::FSharpFunction* ___FieldReader;

  /// @brief Field Constructor, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::FSharpFunction* ___Constructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase, ___Tag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase, ___Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase, ___Fields) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase, ___FieldReader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase, ___Constructor) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::DiscriminatedUnionConverter::<>c__DisplayClass8_0*
class CORDL_TYPE __DiscriminatedUnionConverter____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tag, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tag, put = __cordl_internal_set_tag)) int32_t tag;

  static inline ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass8_0* New_ctor();

  /// @brief Method <WriteJson>b__0, addr 0x2ab9608, size 0x24, virtual false, abstract: false, final false
  inline bool _WriteJson_b__0(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase* c);

  constexpr int32_t const& __cordl_internal_get_tag() const;

  constexpr int32_t& __cordl_internal_get_tag();

  constexpr void __cordl_internal_set_tag(int32_t value);

  /// @brief Method .ctor, addr 0x2ab8b88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiscriminatedUnionConverter____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiscriminatedUnionConverter____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiscriminatedUnionConverter____c__DisplayClass8_0(__DiscriminatedUnionConverter____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiscriminatedUnionConverter____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiscriminatedUnionConverter____c__DisplayClass8_0(__DiscriminatedUnionConverter____c__DisplayClass8_0 const&) = delete;

  /// @brief Field tag, offset: 0x10, size: 0x4, def value: None
  int32_t ___tag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass8_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass8_0, ___tag) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::DiscriminatedUnionConverter::<>c__DisplayClass9_0*
class CORDL_TYPE __DiscriminatedUnionConverter____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0))::System::Func_2<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*, bool>* __9__0;

  /// @brief Field caseName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_caseName, put = __cordl_internal_set_caseName))::StringW caseName;

  static inline ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass9_0* New_ctor();

  /// @brief Method <ReadJson>b__0, addr 0x2ab962c, size 0x24, virtual false, abstract: false, final false
  inline bool _ReadJson_b__0(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase* c);

  constexpr ::System::Func_2<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*, bool>*& __cordl_internal_get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*, bool>*> const& __cordl_internal_get___9__0() const;

  constexpr ::StringW const& __cordl_internal_get_caseName() const;

  constexpr ::StringW& __cordl_internal_get_caseName();

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*, bool>* value);

  constexpr void __cordl_internal_set_caseName(::StringW value);

  /// @brief Method .ctor, addr 0x2ab91e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiscriminatedUnionConverter____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiscriminatedUnionConverter____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiscriminatedUnionConverter____c__DisplayClass9_0(__DiscriminatedUnionConverter____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiscriminatedUnionConverter____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiscriminatedUnionConverter____c__DisplayClass9_0(__DiscriminatedUnionConverter____c__DisplayClass9_0 const&) = delete;

  /// @brief Field caseName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___caseName;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*, bool>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass9_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass9_0, ___caseName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass9_0, _____9__0) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
// Type: Newtonsoft.Json.Converters::DiscriminatedUnionConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::DiscriminatedUnionConverter*
class CORDL_TYPE DiscriminatedUnionConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  using Union = ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union;

  using UnionCase = ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase;

  using __c__DisplayClass8_0 = ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass9_0;

  /// @brief Field UnionCache, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_UnionCache,
               put = setStaticF_UnionCache))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union*>* UnionCache;

  /// @brief Field UnionTypeLookupCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnionTypeLookupCache,
                             put = setStaticF_UnionTypeLookupCache))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* UnionTypeLookupCache;

  /// @brief Method CanConvert, addr 0x2ab91e8, size 0x2a0, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method CreateUnion, addr 0x2ab7ec8, size 0x79c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union* CreateUnion(::System::Type* t);

  /// @brief Method CreateUnionTypeLookup, addr 0x2ab7cc8, size 0x200, virtual false, abstract: false, final false
  static inline ::System::Type* CreateUnionTypeLookup(::System::Type* t);

  static inline ::Newtonsoft::Json::Converters::DiscriminatedUnionConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x2ab8b90, size 0x650, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x2ab86e0, size 0x4a8, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x2ab9488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union*>* getStaticF_UnionCache();

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* getStaticF_UnionTypeLookupCache();

  static inline void setStaticF_UnionCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union*>* value);

  static inline void setStaticF_UnionTypeLookupCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscriminatedUnionConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiscriminatedUnionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiscriminatedUnionConverter(DiscriminatedUnionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiscriminatedUnionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiscriminatedUnionConverter(DiscriminatedUnionConverter const&) = delete;

  /// @brief Field CasePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString CasePropertyName{ u"Case" };

  /// @brief Field FieldsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString FieldsPropertyName{ u"Fields" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::DiscriminatedUnionConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::DiscriminatedUnionConverter*, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter");
NEED_NO_BOX(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__Union*, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/Union");
NEED_NO_BOX(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter__UnionCase*, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/UnionCase");
NEED_NO_BOX(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass8_0*, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/<>c__DisplayClass8_0");
NEED_NO_BOX(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::__DiscriminatedUnionConverter____c__DisplayClass9_0*, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/<>c__DisplayClass9_0");
