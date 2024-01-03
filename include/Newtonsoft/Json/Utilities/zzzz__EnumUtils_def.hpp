#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumUtils)
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
class __EnumUtils____c;
}
namespace Newtonsoft::Json::Utilities {
template <typename TFirst, typename TSecond> class BidirectionalDictionary_2;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __EnumUtils____c__2_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class EnumValue_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class EnumMemberAttribute;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class EnumUtils;
}
namespace Newtonsoft::Json::Utilities {
class __EnumUtils____c;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __EnumUtils____c__2_1;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::EnumUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__EnumUtils____c);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__EnumUtils____c__2_1);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11884))
// CS Name: ::EnumUtils::<>c*
class CORDL_TYPE __EnumUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Utilities::__EnumUtils____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*, ::StringW>* __9__1_0;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_2<::System::Reflection::FieldInfo*, bool>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::System::Reflection::FieldInfo*, bool>* __9__6_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Utilities::__EnumUtils____c* value);

  static inline ::Newtonsoft::Json::Utilities::__EnumUtils____c* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*, ::StringW>* value);

  static inline ::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*, ::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9__5_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* getStaticF___9__5_0();

  static inline void setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* getStaticF___9__6_0();

  static inline ::Newtonsoft::Json::Utilities::__EnumUtils____c* New_ctor();

  /// @brief Method .ctor, addr 0x2662864, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitializeEnumType>b__1_0, addr 0x266286c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _InitializeEnumType_b__1_0(::System::Runtime::Serialization::EnumMemberAttribute* a);

  /// @brief Method <GetValues>b__5_0, addr 0x2662884, size 0x18, virtual false, abstract: false, final false
  inline bool _GetValues_b__5_0(::System::Reflection::FieldInfo* f);

  /// @brief Method <GetNames>b__6_0, addr 0x266289c, size 0x18, virtual false, abstract: false, final false
  inline bool _GetNames_b__6_0(::System::Reflection::FieldInfo* f);

  // Ctor Parameters [CppParam { name: "", ty: "__EnumUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumUtils____c(__EnumUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumUtils____c(__EnumUtils____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumUtils____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__EnumUtils____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__2`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11885))
// CS Name: ::EnumUtils::<>c__2`1<T>*
class CORDL_TYPE __EnumUtils____c__2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Utilities::__EnumUtils____c__2_1<T>* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_2<::Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>*, bool>* __9__2_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Utilities::__EnumUtils____c__2_1<T>* value);

  static inline ::Newtonsoft::Json::Utilities::__EnumUtils____c__2_1<T>* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Func_2<::Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>*, bool>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>*, bool>* getStaticF___9__2_0();

  static inline ::Newtonsoft::Json::Utilities::__EnumUtils____c__2_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetFlagsValues>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetFlagsValues_b__2_0(::Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>* v);

  // Ctor Parameters [CppParam { name: "", ty: "__EnumUtils____c__2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumUtils____c__2_1(__EnumUtils____c__2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumUtils____c__2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumUtils____c__2_1(__EnumUtils____c__2_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumUtils____c__2_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::EnumUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11886))
// CS Name: ::Newtonsoft.Json.Utilities::EnumUtils*
class CORDL_TYPE EnumUtils : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__2_1 = ::Newtonsoft::Json::Utilities::__EnumUtils____c__2_1<T>;

  using __c = ::Newtonsoft::Json::Utilities::__EnumUtils____c;

  /// @brief Field EnumMemberNamesPerType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnumMemberNamesPerType, put = setStaticF_EnumMemberNamesPerType))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::System::Type*, ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::StringW>*>* EnumMemberNamesPerType;

  static inline void
  setStaticF_EnumMemberNamesPerType(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::StringW>*>* value);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::StringW>*>* getStaticF_EnumMemberNamesPerType();

  /// @brief Method InitializeEnumType, addr 0x266171c, size 0x434, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::StringW>* InitializeEnumType(::System::Type* type);

  /// @brief Method GetFlagsValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IList_1<T>* GetFlagsValues(T value);

  /// @brief Method GetNamesAndValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>*>* GetNamesAndValues();

  /// @brief Method GetNamesAndValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TUnderlyingType> static inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::EnumValue_1<TUnderlyingType>*>* GetNamesAndValues(::System::Type* enumType);

  /// @brief Method GetValues, addr 0x26541e4, size 0x530, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Object*>* GetValues(::System::Type* enumType);

  /// @brief Method GetNames, addr 0x2661b50, size 0x524, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::StringW>* GetNames(::System::Type* enumType);

  /// @brief Method ParseEnumName, addr 0x2662074, size 0x268, virtual false, abstract: false, final false
  static inline ::System::Object* ParseEnumName(::StringW enumText, bool isNullable, ::System::Type* t);

  /// @brief Method ToEnumName, addr 0x2662354, size 0x1e8, virtual false, abstract: false, final false
  static inline ::StringW ToEnumName(::System::Type* enumType, ::StringW enumText, bool camelCaseText);

  /// @brief Method ResolvedEnumName, addr 0x26622dc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ResolvedEnumName(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::StringW>* map, ::StringW enumText);

  // Ctor Parameters [CppParam { name: "", ty: "EnumUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumUtils(EnumUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumUtils(EnumUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::EnumUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::EnumUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::EnumUtils*, "Newtonsoft.Json.Utilities", "EnumUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__EnumUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__EnumUtils____c*, "Newtonsoft.Json.Utilities", "EnumUtils/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__EnumUtils____c__2_1, "Newtonsoft.Json.Utilities", "EnumUtils/<>c__2`1");
