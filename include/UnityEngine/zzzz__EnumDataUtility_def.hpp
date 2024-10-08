#pragma once
// IWYU pragma private; include "UnityEngine/EnumDataUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumDataUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Enum;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
struct EnumData;
}
namespace UnityEngine {
struct __EnumDataUtility__CachedType;
}
namespace UnityEngine {
class __EnumDataUtility____c;
}
namespace UnityEngine {
class __EnumDataUtility____c__DisplayClass2_0;
}
namespace UnityEngine {
struct __EnumDataUtility____c__DisplayClass8_0;
}
// Forward declare root types
namespace UnityEngine {
struct __EnumDataUtility__CachedType;
}
namespace UnityEngine {
class EnumDataUtility;
}
namespace UnityEngine {
class __EnumDataUtility____c;
}
namespace UnityEngine {
class __EnumDataUtility____c__DisplayClass2_0;
}
namespace UnityEngine {
struct __EnumDataUtility____c__DisplayClass8_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__EnumDataUtility__CachedType);
MARK_REF_PTR_T(::UnityEngine::EnumDataUtility);
MARK_REF_PTR_T(::UnityEngine::__EnumDataUtility____c);
MARK_REF_PTR_T(::UnityEngine::__EnumDataUtility____c__DisplayClass2_0);
MARK_VAL_T(::UnityEngine::__EnumDataUtility____c__DisplayClass8_0);
// Type: ::CachedType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::EnumDataUtility::CachedType
struct CORDL_TYPE __EnumDataUtility__CachedType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnumDataUtility__CachedType_Unwrapped
  enum struct ____EnumDataUtility__CachedType_Unwrapped : int32_t {
    __E_ExcludeObsolete = static_cast<int32_t>(0x0),
    __E_IncludeObsoleteExceptErrors = static_cast<int32_t>(0x1),
    __E_IncludeAllObsolete = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnumDataUtility__CachedType_Unwrapped() const noexcept {
    return static_cast<____EnumDataUtility__CachedType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumDataUtility__CachedType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnumDataUtility__CachedType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ExcludeObsolete value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__EnumDataUtility__CachedType const ExcludeObsolete;

  /// @brief Field IncludeAllObsolete value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__EnumDataUtility__CachedType const IncludeAllObsolete;

  /// @brief Field IncludeObsoleteExceptErrors value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__EnumDataUtility__CachedType const IncludeObsoleteExceptErrors;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10840 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__EnumDataUtility__CachedType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__EnumDataUtility__CachedType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::EnumDataUtility::<>c*
class CORDL_TYPE __EnumDataUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::__EnumDataUtility____c* __9;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1)) ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* __9__2_1;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_2, put = setStaticF___9__2_2)) ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* __9__2_2;

  /// @brief Field <>9__2_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_3, put = setStaticF___9__2_3)) ::System::Func_2<::System::Enum*, int32_t>* __9__2_3;

  /// @brief Field <>9__2_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_4, put = setStaticF___9__2_4)) ::System::Func_2<::System::Enum*, int32_t>* __9__2_4;

  /// @brief Field <>9__2_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_5, put = setStaticF___9__2_5)) ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* __9__2_5;

  static inline ::UnityEngine::__EnumDataUtility____c* New_ctor();

  /// @brief Method <GetCachedEnumData>b__2_1, addr 0x4834348, size 0x54, virtual false, abstract: false, final false
  inline ::StringW _GetCachedEnumData_b__2_1(::System::Reflection::FieldInfo* f);

  /// @brief Method <GetCachedEnumData>b__2_2, addr 0x483439c, size 0x94, virtual false, abstract: false, final false
  inline ::bs_hook::EnumPtr _GetCachedEnumData_b__2_2(::System::Reflection::FieldInfo* f);

  /// @brief Method <GetCachedEnumData>b__2_3, addr 0x4834430, size 0x5c, virtual false, abstract: false, final false
  inline int32_t _GetCachedEnumData_b__2_3(::bs_hook::EnumPtr v);

  /// @brief Method <GetCachedEnumData>b__2_4, addr 0x483448c, size 0x5c, virtual false, abstract: false, final false
  inline int32_t _GetCachedEnumData_b__2_4(::bs_hook::EnumPtr v);

  /// @brief Method <GetCachedEnumData>b__2_5, addr 0x4834320, size 0x28, virtual false, abstract: false, final false
  inline int32_t _GetCachedEnumData_b__2_5(::System::Reflection::FieldInfo* f);

  /// @brief Method .ctor, addr 0x4834318, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::__EnumDataUtility____c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* getStaticF___9__2_1();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* getStaticF___9__2_2();

  static inline ::System::Func_2<::System::Enum*, int32_t>* getStaticF___9__2_3();

  static inline ::System::Func_2<::System::Enum*, int32_t>* getStaticF___9__2_4();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* getStaticF___9__2_5();

  static inline void setStaticF___9(::UnityEngine::__EnumDataUtility____c* value);

  static inline void setStaticF___9__2_1(::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* value);

  static inline void setStaticF___9__2_2(::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* value);

  static inline void setStaticF___9__2_3(::System::Func_2<::System::Enum*, int32_t>* value);

  static inline void setStaticF___9__2_4(::System::Func_2<::System::Enum*, int32_t>* value);

  static inline void setStaticF___9__2_5(::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumDataUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnumDataUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumDataUtility____c(__EnumDataUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumDataUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumDataUtility____c(__EnumDataUtility____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__EnumDataUtility____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::EnumDataUtility::<>c__DisplayClass2_0*
class CORDL_TYPE __EnumDataUtility____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field nicifyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nicifyName, put = __cordl_internal_set_nicifyName)) ::System::Func_2<::StringW, ::StringW>* nicifyName;

  static inline ::UnityEngine::__EnumDataUtility____c__DisplayClass2_0* New_ctor();

  /// @brief Method <GetCachedEnumData>b__0, addr 0x48344e8, size 0x68, virtual false, abstract: false, final false
  inline ::StringW _GetCachedEnumData_b__0(::System::Reflection::FieldInfo* f);

  constexpr ::System::Func_2<::StringW, ::StringW>*& __cordl_internal_get_nicifyName();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::StringW>*> const& __cordl_internal_get_nicifyName() const;

  constexpr void __cordl_internal_set_nicifyName(::System::Func_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x4833948, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumDataUtility____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnumDataUtility____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnumDataUtility____c__DisplayClass2_0(__EnumDataUtility____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnumDataUtility____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnumDataUtility____c__DisplayClass2_0(__EnumDataUtility____c__DisplayClass2_0 const&) = delete;

  /// @brief Field nicifyName, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::StringW, ::StringW>* ___nicifyName;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10842 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__EnumDataUtility____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__EnumDataUtility____c__DisplayClass2_0, ___nicifyName) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::EnumDataUtility::<>c__DisplayClass8_0
struct CORDL_TYPE __EnumDataUtility____c__DisplayClass8_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnumDataUtility____c__DisplayClass8_0();

  // Ctor Parameters [CppParam { name: "nicifyName", ty: "::System::Func_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo*",
  // modifiers: "", def_value: None }]
  constexpr __EnumDataUtility____c__DisplayClass8_0(::System::Func_2<::StringW, ::StringW>* nicifyName, ::System::Reflection::FieldInfo* field) noexcept;

  /// @brief Field nicifyName, offset: 0x0, size: 0x8, def value: None
  ::System::Func_2<::StringW, ::StringW>* nicifyName;

  /// @brief Field field, offset: 0x8, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* field;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__EnumDataUtility____c__DisplayClass8_0, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__EnumDataUtility____c__DisplayClass8_0, nicifyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__EnumDataUtility____c__DisplayClass8_0, field) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::EnumDataUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::EnumDataUtility*
class CORDL_TYPE EnumDataUtility : public ::System::Object {
public:
  // Declarations
  using CachedType = ::UnityEngine::__EnumDataUtility__CachedType;

  using __c = ::UnityEngine::__EnumDataUtility____c;

  using __c__DisplayClass2_0 = ::UnityEngine::__EnumDataUtility____c__DisplayClass2_0;

  using __c__DisplayClass8_0 = ::UnityEngine::__EnumDataUtility____c__DisplayClass8_0;

  /// @brief Field s_EnumData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EnumData,
                             put = setStaticF_s_EnumData)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::__EnumDataUtility__CachedType, ::System::Type*>,
                                                                                                        ::UnityEngine::EnumData>* s_EnumData;

  /// @brief Method CheckObsoleteAddition, addr 0x4833950, size 0x120, virtual false, abstract: false, final false
  static inline bool CheckObsoleteAddition(::System::Reflection::FieldInfo* field, ::UnityEngine::__EnumDataUtility__CachedType cachedType);

  /// @brief Method EnumNameFromEnumField, addr 0x4834014, size 0x1cc, virtual false, abstract: false, final false
  static inline ::StringW EnumNameFromEnumField(::System::Reflection::FieldInfo* field, ::System::Func_2<::StringW, ::StringW>* nicifyName);

  /// @brief Method EnumTooltipFromEnumField, addr 0x4833edc, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW EnumTooltipFromEnumField(::System::Reflection::FieldInfo* field);

  /// @brief Method GetCachedEnumData, addr 0x4832a9c, size 0xeac, virtual false, abstract: false, final false
  static inline ::UnityEngine::EnumData GetCachedEnumData(::System::Type* enumType, ::UnityEngine::__EnumDataUtility__CachedType cachedType, ::System::Func_2<::StringW, ::StringW>* nicifyName);

  /// @brief Method HandleInspectorOrderAttribute, addr 0x4833a70, size 0x46c, virtual false, abstract: false, final false
  static inline void HandleInspectorOrderAttribute(::System::Type* enumType, ByRef<::UnityEngine::EnumData> enumData);

  /// @brief Method <EnumNameFromEnumField>g__NicifyName|8_0, addr 0x48341e0, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW _EnumNameFromEnumField_g__NicifyName_8_0(ByRef<::UnityEngine::__EnumDataUtility____c__DisplayClass8_0> _cordl_fixed_empty_name_whitespace);

  static inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::__EnumDataUtility__CachedType, ::System::Type*>, ::UnityEngine::EnumData>* getStaticF_s_EnumData();

  static inline void
  setStaticF_s_EnumData(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::__EnumDataUtility__CachedType, ::System::Type*>, ::UnityEngine::EnumData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumDataUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumDataUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumDataUtility(EnumDataUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumDataUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumDataUtility(EnumDataUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EnumDataUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__EnumDataUtility__CachedType, "UnityEngine", "EnumDataUtility/CachedType");
NEED_NO_BOX(::UnityEngine::EnumDataUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EnumDataUtility*, "UnityEngine", "EnumDataUtility");
NEED_NO_BOX(::UnityEngine::__EnumDataUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__EnumDataUtility____c*, "UnityEngine", "EnumDataUtility/<>c");
NEED_NO_BOX(::UnityEngine::__EnumDataUtility____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__EnumDataUtility____c__DisplayClass2_0*, "UnityEngine", "EnumDataUtility/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__EnumDataUtility____c__DisplayClass8_0, "UnityEngine", "EnumDataUtility/<>c__DisplayClass8_0");
