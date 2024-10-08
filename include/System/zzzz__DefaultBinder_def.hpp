#pragma once
// IWYU pragma private; include "System/DefaultBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultBinder)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
namespace System {
class __DefaultBinder__BinderState;
}
namespace System {
struct __DefaultBinder__Primitives;
}
namespace System {
class __DefaultBinder____c;
}
// Forward declare root types
namespace System {
struct __DefaultBinder__Primitives;
}
namespace System {
class DefaultBinder;
}
namespace System {
class __DefaultBinder__BinderState;
}
namespace System {
class __DefaultBinder____c;
}
// Write type traits
MARK_VAL_T(::System::__DefaultBinder__Primitives);
MARK_REF_PTR_T(::System::DefaultBinder);
MARK_REF_PTR_T(::System::__DefaultBinder__BinderState);
MARK_REF_PTR_T(::System::__DefaultBinder____c);
// Type: ::BinderState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::DefaultBinder::BinderState*
class CORDL_TYPE __DefaultBinder__BinderState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_argsMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_argsMap, put = __cordl_internal_set_m_argsMap)) ::ArrayW<int32_t, ::Array<int32_t>*> m_argsMap;

  /// @brief Field m_isParamArray, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isParamArray, put = __cordl_internal_set_m_isParamArray)) bool m_isParamArray;

  /// @brief Field m_originalSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_originalSize, put = __cordl_internal_set_m_originalSize)) int32_t m_originalSize;

  static inline ::System::__DefaultBinder__BinderState* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> argsMap, int32_t originalSize, bool isParamArray);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_argsMap() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_argsMap();

  constexpr bool const& __cordl_internal_get_m_isParamArray() const;

  constexpr bool& __cordl_internal_get_m_isParamArray();

  constexpr int32_t const& __cordl_internal_get_m_originalSize() const;

  constexpr int32_t& __cordl_internal_get_m_originalSize();

  constexpr void __cordl_internal_set_m_argsMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_isParamArray(bool value);

  constexpr void __cordl_internal_set_m_originalSize(int32_t value);

  /// @brief Method .ctor, addr 0x3da4fac, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> argsMap, int32_t originalSize, bool isParamArray);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultBinder__BinderState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultBinder__BinderState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultBinder__BinderState(__DefaultBinder__BinderState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultBinder__BinderState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultBinder__BinderState(__DefaultBinder__BinderState const&) = delete;

  /// @brief Field m_argsMap, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_argsMap;

  /// @brief Field m_originalSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_originalSize;

  /// @brief Field m_isParamArray, offset: 0x1c, size: 0x1, def value: None
  bool ___m_isParamArray;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2552 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DefaultBinder__BinderState, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::__DefaultBinder__BinderState, ___m_argsMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__DefaultBinder__BinderState, ___m_originalSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__DefaultBinder__BinderState, ___m_isParamArray) == 0x1c, "Offset mismatch!");

} // namespace System
// Type: ::Primitives
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::DefaultBinder::Primitives
struct CORDL_TYPE __DefaultBinder__Primitives {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DefaultBinder__Primitives_Unwrapped
  enum struct ____DefaultBinder__Primitives_Unwrapped : int32_t {
    __E_Boolean = static_cast<int32_t>(0x8),
    __E_Char = static_cast<int32_t>(0x10),
    __E_SByte = static_cast<int32_t>(0x20),
    __E_Byte = static_cast<int32_t>(0x40),
    __E_Int16 = static_cast<int32_t>(0x80),
    __E_UInt16 = static_cast<int32_t>(0x100),
    __E_Int32 = static_cast<int32_t>(0x200),
    __E_UInt32 = static_cast<int32_t>(0x400),
    __E_Int64 = static_cast<int32_t>(0x800),
    __E_UInt64 = static_cast<int32_t>(0x1000),
    __E_Single = static_cast<int32_t>(0x2000),
    __E_Double = static_cast<int32_t>(0x4000),
    __E_Decimal = static_cast<int32_t>(0x8000),
    __E_DateTime = static_cast<int32_t>(0x10000),
    __E_String = static_cast<int32_t>(0x40000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DefaultBinder__Primitives_Unwrapped() const noexcept {
    return static_cast<____DefaultBinder__Primitives_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultBinder__Primitives();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DefaultBinder__Primitives(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Boolean value: static_cast<int32_t>(0x8)
  static ::System::__DefaultBinder__Primitives const Boolean;

  /// @brief Field Byte value: static_cast<int32_t>(0x40)
  static ::System::__DefaultBinder__Primitives const Byte;

  /// @brief Field Char value: static_cast<int32_t>(0x10)
  static ::System::__DefaultBinder__Primitives const Char;

  /// @brief Field DateTime value: static_cast<int32_t>(0x10000)
  static ::System::__DefaultBinder__Primitives const DateTime;

  /// @brief Field Decimal value: static_cast<int32_t>(0x8000)
  static ::System::__DefaultBinder__Primitives const Decimal;

  /// @brief Field Double value: static_cast<int32_t>(0x4000)
  static ::System::__DefaultBinder__Primitives const Double;

  /// @brief Field Int16 value: static_cast<int32_t>(0x80)
  static ::System::__DefaultBinder__Primitives const Int16;

  /// @brief Field Int32 value: static_cast<int32_t>(0x200)
  static ::System::__DefaultBinder__Primitives const Int32;

  /// @brief Field Int64 value: static_cast<int32_t>(0x800)
  static ::System::__DefaultBinder__Primitives const Int64;

  /// @brief Field SByte value: static_cast<int32_t>(0x20)
  static ::System::__DefaultBinder__Primitives const SByte;

  /// @brief Field Single value: static_cast<int32_t>(0x2000)
  static ::System::__DefaultBinder__Primitives const Single;

  /// @brief Field String value: static_cast<int32_t>(0x40000)
  static ::System::__DefaultBinder__Primitives const String;

  /// @brief Field UInt16 value: static_cast<int32_t>(0x100)
  static ::System::__DefaultBinder__Primitives const UInt16;

  /// @brief Field UInt32 value: static_cast<int32_t>(0x400)
  static ::System::__DefaultBinder__Primitives const UInt32;

  /// @brief Field UInt64 value: static_cast<int32_t>(0x1000)
  static ::System::__DefaultBinder__Primitives const UInt64;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2553 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DefaultBinder__Primitives, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__DefaultBinder__Primitives, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::DefaultBinder::<>c*
class CORDL_TYPE __DefaultBinder____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::__DefaultBinder____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Predicate_1<::System::Type*>* __9__2_0;

  static inline ::System::__DefaultBinder____c* New_ctor();

  /// @brief Method <SelectProperty>b__2_0, addr 0x3da837c, size 0x5c, virtual false, abstract: false, final false
  inline bool _SelectProperty_b__2_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x3da8374, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::__DefaultBinder____c* getStaticF___9();

  static inline ::System::Predicate_1<::System::Type*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::System::__DefaultBinder____c* value);

  static inline void setStaticF___9__2_0(::System::Predicate_1<::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultBinder____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultBinder____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultBinder____c(__DefaultBinder____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultBinder____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultBinder____c(__DefaultBinder____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2554 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DefaultBinder____c, 0x10>, "Size mismatch!");

} // namespace System
// Type: System::DefaultBinder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::DefaultBinder*
class CORDL_TYPE DefaultBinder : public ::System::Reflection::Binder {
public:
  // Declarations
  using BinderState = ::System::__DefaultBinder__BinderState;

  using Primitives = ::System::__DefaultBinder__Primitives;

  using __c = ::System::__DefaultBinder____c;

  /// @brief Field _primitiveConversions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__primitiveConversions,
                             put = setStaticF__primitiveConversions)) ::ArrayW<::System::__DefaultBinder__Primitives, ::Array<::System::__DefaultBinder__Primitives>*>
      _primitiveConversions;

  /// @brief Method BindToField, addr 0x3da52bc, size 0x49c, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> match,
                                                      ::System::Object* value, ::System::Globalization::CultureInfo* cultureInfo);

  /// @brief Method BindToMethod, addr 0x3da2d9c, size 0x1ec8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                        ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> args,
                                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers,
                                                        ::System::Globalization::CultureInfo* cultureInfo, ::ArrayW<::StringW, ::Array<::StringW>*> names, ByRef<::System::Object*> state);

  /// @brief Method CanChangePrimitive, addr 0x3da8148, size 0x64, virtual false, abstract: false, final false
  static inline bool CanChangePrimitive(::System::Type* source, ::System::Type* target);

  /// @brief Method CanConvertPrimitive, addr 0x3da6240, size 0x224, virtual false, abstract: false, final false
  static inline bool CanConvertPrimitive(::System::RuntimeType* source, ::System::RuntimeType* target);

  /// @brief Method CanConvertPrimitiveObjectToType, addr 0x3da4e9c, size 0x110, virtual false, abstract: false, final false
  static inline bool CanConvertPrimitiveObjectToType(::System::Object* source, ::System::RuntimeType* type);

  /// @brief Method CanPrimitiveWiden, addr 0x3da81ac, size 0xd0, virtual false, abstract: false, final false
  static inline bool CanPrimitiveWiden(::System::Type* source, ::System::Type* target);

  /// @brief Method ChangeType, addr 0x3da6d38, size 0x58, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* type, ::System::Globalization::CultureInfo* cultureInfo);

  /// @brief Method CompareMethodSig, addr 0x3da78b4, size 0x168, virtual false, abstract: false, final false
  static inline bool CompareMethodSig(::System::Reflection::MethodBase* m1, ::System::Reflection::MethodBase* m2);

  /// @brief Method CompareMethodSigAndName, addr 0x3da76b8, size 0x168, virtual false, abstract: false, final false
  static inline bool CompareMethodSigAndName(::System::Reflection::MethodBase* m1, ::System::Reflection::MethodBase* m2);

  /// @brief Method CreateParamOrder, addr 0x3da4c64, size 0x238, virtual false, abstract: false, final false
  static inline bool CreateParamOrder(::ArrayW<int32_t, ::Array<int32_t>*> paramOrder, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> pars,
                                      ::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method ExactBinding, addr 0x3da7078, size 0x260, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* ExactBinding(::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                               ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method ExactPropertyBinding, addr 0x3da7420, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* ExactPropertyBinding(::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> match, ::System::Type* returnType,
                                                                         ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method FindMostDerivedNewSlotMeth, addr 0x3da72d8, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match, int32_t cMatches);

  /// @brief Method FindMostSpecific, addr 0x3da6800, size 0x450, virtual false, abstract: false, final false
  static inline int32_t FindMostSpecific(::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> p1, ::ArrayW<int32_t, ::Array<int32_t>*> paramOrder1,
                                         ::System::Type* paramArrayType1, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> p2,
                                         ::ArrayW<int32_t, ::Array<int32_t>*> paramOrder2, ::System::Type* paramArrayType2, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                         ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method FindMostSpecificField, addr 0x3da5758, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t FindMostSpecificField(::System::Reflection::FieldInfo* cur1, ::System::Reflection::FieldInfo* cur2);

  /// @brief Method FindMostSpecificMethod, addr 0x3da513c, size 0x180, virtual false, abstract: false, final false
  static inline int32_t FindMostSpecificMethod(::System::Reflection::MethodBase* m1, ::ArrayW<int32_t, ::Array<int32_t>*> paramOrder1, ::System::Type* paramArrayType1,
                                               ::System::Reflection::MethodBase* m2, ::ArrayW<int32_t, ::Array<int32_t>*> paramOrder2, ::System::Type* paramArrayType2,
                                               ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method FindMostSpecificProperty, addr 0x3da6c50, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t FindMostSpecificProperty(::System::Reflection::PropertyInfo* cur1, ::System::Reflection::PropertyInfo* cur2);

  /// @brief Method FindMostSpecificType, addr 0x3da6464, size 0x39c, virtual false, abstract: false, final false
  static inline int32_t FindMostSpecificType(::System::Type* c1, ::System::Type* c2, ::System::Type* t);

  /// @brief Method GetHierarchyDepth, addr 0x3da7820, size 0x94, virtual false, abstract: false, final false
  static inline int32_t GetHierarchyDepth(::System::Type* t);

  static inline ::System::DefaultBinder* New_ctor();

  /// @brief Method ReorderArgumentArray, addr 0x3da6d90, size 0x2e8, virtual true, abstract: false, final false
  inline void ReorderArgumentArray(ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> args, ::System::Object* state);

  /// @brief Method ReorderParams, addr 0x3da4fec, size 0x150, virtual false, abstract: false, final false
  static inline void ReorderParams(::ArrayW<int32_t, ::Array<int32_t>*> paramOrder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> vars);

  /// @brief Method SelectMethod, addr 0x3da7a1c, size 0x72c, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                        ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method SelectProperty, addr 0x3da5840, size 0xa00, virtual true, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags bindingAttr,
                                                            ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> match, ::System::Type* returnType,
                                                            ::ArrayW<::System::Type*, ::Array<::System::Type*>*> indexes,
                                                            ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method .ctor, addr 0x3da827c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::__DefaultBinder__Primitives, ::Array<::System::__DefaultBinder__Primitives>*> getStaticF__primitiveConversions();

  static inline void setStaticF__primitiveConversions(::ArrayW<::System::__DefaultBinder__Primitives, ::Array<::System::__DefaultBinder__Primitives>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultBinder(DefaultBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultBinder(DefaultBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2555 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DefaultBinder, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__DefaultBinder__Primitives, "System", "DefaultBinder/Primitives");
NEED_NO_BOX(::System::DefaultBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::DefaultBinder*, "System", "DefaultBinder");
NEED_NO_BOX(::System::__DefaultBinder__BinderState);
DEFINE_IL2CPP_ARG_TYPE(::System::__DefaultBinder__BinderState*, "System", "DefaultBinder/BinderState");
NEED_NO_BOX(::System::__DefaultBinder____c);
DEFINE_IL2CPP_ARG_TYPE(::System::__DefaultBinder____c*, "System", "DefaultBinder/<>c");
