#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSerializer)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__BoolSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__ByteSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__CharSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__ClassInfo_1;
}
namespace LiteNetLib::Utils {
template <typename TProperty> class __NetSerializer__CustomTypeClass_1;
}
namespace LiteNetLib::Utils {
template <typename TProperty> class __NetSerializer__CustomTypeStatic_1;
}
namespace LiteNetLib::Utils {
template <typename TProperty> class __NetSerializer__CustomTypeStruct_1;
}
namespace LiteNetLib::Utils {
class __NetSerializer__CustomType;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__DoubleSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__EnumByteSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__EnumIntSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallClass_2;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallSpecificAuto_2;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallSpecific_2;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallStatic_2;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallStruct_2;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__FastCall_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__FloatSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__IPEndPointSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__IntSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__LongSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__SByteSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__ShortSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__StringSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__UIntSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__ULongSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__UShortSerializer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetSerializer;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__BoolSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__ByteSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__CharSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__ClassInfo_1;
}
namespace LiteNetLib::Utils {
class __NetSerializer__CustomType;
}
namespace LiteNetLib::Utils {
template <typename TProperty> class __NetSerializer__CustomTypeClass_1;
}
namespace LiteNetLib::Utils {
template <typename TProperty> class __NetSerializer__CustomTypeStatic_1;
}
namespace LiteNetLib::Utils {
template <typename TProperty> class __NetSerializer__CustomTypeStruct_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__DoubleSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__EnumByteSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__EnumIntSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallClass_2;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallSpecificAuto_2;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallSpecific_2;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallStatic_2;
}
namespace LiteNetLib::Utils {
template <typename TClass, typename TProperty> class __NetSerializer__FastCallStruct_2;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__FastCall_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__FloatSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__IPEndPointSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__IntSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__LongSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__SByteSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__ShortSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__StringSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__UIntSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__ULongSerializer_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetSerializer__UShortSerializer_1;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NetSerializer);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__CharSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__ClassInfo_1);
MARK_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__CustomType);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__FastCallClass_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__FastCall_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__IntSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__LongSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__StringSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1);
// Type: ::FastCall`1
// SizeInfo { instance_size: 24, native_size: 17, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::FastCall`1<T>*
class CORDL_TYPE __NetSerializer__FastCall_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsArray, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_IsArray, put = __cordl_internal_set_IsArray)) bool IsArray;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, bool isArray);

  static inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  constexpr bool const& __cordl_internal_get_IsArray() const;

  constexpr bool& __cordl_internal_get_IsArray();

  constexpr void __cordl_internal_set_IsArray(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__FastCall_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCall_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__FastCall_1(__NetSerializer__FastCall_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCall_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__FastCall_1(__NetSerializer__FastCall_1 const&) = delete;

  /// @brief Field IsArray, offset: 0x10, size: 0x1, def value: None
  bool ___IsArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::FastCallSpecific`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename TClass, typename TProperty>
// Is value type: false
// CS Name: ::NetSerializer::FastCallSpecific`2<TClass,TProperty>*
class CORDL_TYPE __NetSerializer__FastCallSpecific_2 : public ::LiteNetLib::Utils::__NetSerializer__FastCall_1<TClass> {
public:
  // Declarations
  /// @brief Field Getter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Getter, put = __cordl_internal_set_Getter))::System::Func_2<TClass, TProperty>* Getter;

  /// @brief Field GetterArr, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_GetterArr, put = __cordl_internal_set_GetterArr))::System::Func_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>* GetterArr;

  /// @brief Field Setter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Setter, put = __cordl_internal_set_Setter))::System::Action_2<TClass, TProperty>* Setter;

  /// @brief Field SetterArr, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_SetterArr, put = __cordl_internal_set_SetterArr))::System::Action_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>* SetterArr;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, bool isArray);

  static inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>* New_ctor();

  /// @brief Method ReadArrayHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<TProperty, ::Array<TProperty>*> ReadArrayHelper(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method WriteArrayHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<TProperty, ::Array<TProperty>*> WriteArrayHelper(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  constexpr ::System::Func_2<TClass, TProperty>*& __cordl_internal_get_Getter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass, TProperty>*> const& __cordl_internal_get_Getter() const;

  constexpr ::System::Func_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>*& __cordl_internal_get_GetterArr();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>*> const& __cordl_internal_get_GetterArr() const;

  constexpr ::System::Action_2<TClass, TProperty>*& __cordl_internal_get_Setter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass, TProperty>*> const& __cordl_internal_get_Setter() const;

  constexpr ::System::Action_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>*& __cordl_internal_get_SetterArr();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>*> const& __cordl_internal_get_SetterArr() const;

  constexpr void __cordl_internal_set_Getter(::System::Func_2<TClass, TProperty>* value);

  constexpr void __cordl_internal_set_GetterArr(::System::Func_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>* value);

  constexpr void __cordl_internal_set_Setter(::System::Action_2<TClass, TProperty>* value);

  constexpr void __cordl_internal_set_SetterArr(::System::Action_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__FastCallSpecific_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__FastCallSpecific_2(__NetSerializer__FastCallSpecific_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallSpecific_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__FastCallSpecific_2(__NetSerializer__FastCallSpecific_2 const&) = delete;

  /// @brief Field Getter, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TClass, TProperty>* ___Getter;

  /// @brief Field Setter, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<TClass, TProperty>* ___Setter;

  /// @brief Field GetterArr, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>* ___GetterArr;

  /// @brief Field SetterArr, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>* ___SetterArr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::FastCallSpecificAuto`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename TClass, typename TProperty>
// Is value type: false
// CS Name: ::NetSerializer::FastCallSpecificAuto`2<TClass,TProperty>*
class CORDL_TYPE __NetSerializer__FastCallSpecificAuto_2 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty> {
public:
  // Declarations
  /// @brief Method ElementRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ElementRead(::LiteNetLib::Utils::NetDataReader* r, ByRef<TProperty> prop);

  /// @brief Method ElementWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ByRef<TProperty> prop);

  static inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__FastCallSpecificAuto_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallSpecificAuto_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__FastCallSpecificAuto_2(__NetSerializer__FastCallSpecificAuto_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallSpecificAuto_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__FastCallSpecificAuto_2(__NetSerializer__FastCallSpecificAuto_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::FastCallStatic`2
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename TClass, typename TProperty>
// Is value type: false
// CS Name: ::NetSerializer::FastCallStatic`2<TClass,TProperty>*
class CORDL_TYPE __NetSerializer__FastCallStatic_2 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty> {
public:
  // Declarations
  /// @brief Field _reader, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader))::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* _reader;

  /// @brief Field _writer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__writer, put = __cordl_internal_set__writer))::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* _writer;

  static inline ::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>* New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* write,
                                                                                                    ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* read);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*& __cordl_internal_get__reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*> const& __cordl_internal_get__reader() const;

  constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*& __cordl_internal_get__writer();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*> const& __cordl_internal_get__writer() const;

  constexpr void __cordl_internal_set__reader(::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* value);

  constexpr void __cordl_internal_set__writer(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* write, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* read);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__FastCallStatic_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallStatic_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__FastCallStatic_2(__NetSerializer__FastCallStatic_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallStatic_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__FastCallStatic_2(__NetSerializer__FastCallStatic_2 const&) = delete;

  /// @brief Field _writer, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* ____writer;

  /// @brief Field _reader, offset: 0x40, size: 0x8, def value: None
  ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* ____reader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::FastCallStruct`2
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename TClass, typename TProperty>
// Is value type: false
// CS Name: ::NetSerializer::FastCallStruct`2<TClass,TProperty>*
class CORDL_TYPE __NetSerializer__FastCallStruct_2 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty> {
public:
  // Declarations
  /// @brief Field _p, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__p, put = __cordl_internal_set__p)) TProperty _p;

  static inline ::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  constexpr TProperty const& __cordl_internal_get__p() const;

  constexpr TProperty& __cordl_internal_get__p();

  constexpr void __cordl_internal_set__p(TProperty value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__FastCallStruct_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallStruct_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__FastCallStruct_2(__NetSerializer__FastCallStruct_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallStruct_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__FastCallStruct_2(__NetSerializer__FastCallStruct_2 const&) = delete;

  /// @brief Field _p, offset: 0x38, size: 0x8, def value: None
  TProperty ____p;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::FastCallClass`2
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename TClass, typename TProperty>
// Is value type: false
// CS Name: ::NetSerializer::FastCallClass`2<TClass,TProperty>*
class CORDL_TYPE __NetSerializer__FastCallClass_2 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty> {
public:
  // Declarations
  /// @brief Field _constructor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__constructor, put = __cordl_internal_set__constructor))::System::Func_1<TProperty>* _constructor;

  static inline ::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>* New_ctor(::System::Func_1<TProperty>* constructor);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w);

  constexpr ::System::Func_1<TProperty>*& __cordl_internal_get__constructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TProperty>*> const& __cordl_internal_get__constructor() const;

  constexpr void __cordl_internal_set__constructor(::System::Func_1<TProperty>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<TProperty>* constructor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__FastCallClass_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallClass_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__FastCallClass_2(__NetSerializer__FastCallClass_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FastCallClass_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__FastCallClass_2(__NetSerializer__FastCallClass_2 const&) = delete;

  /// @brief Field _constructor, offset: 0x38, size: 0x8, def value: None
  ::System::Func_1<TProperty>* ____constructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::IntSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::IntSerializer`1<T>*
class CORDL_TYPE __NetSerializer__IntSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, int32_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__IntSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__IntSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__IntSerializer_1(__NetSerializer__IntSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__IntSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__IntSerializer_1(__NetSerializer__IntSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::UIntSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::UIntSerializer`1<T>*
class CORDL_TYPE __NetSerializer__UIntSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, uint32_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__UIntSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__UIntSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__UIntSerializer_1(__NetSerializer__UIntSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__UIntSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__UIntSerializer_1(__NetSerializer__UIntSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::ShortSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::ShortSerializer`1<T>*
class CORDL_TYPE __NetSerializer__ShortSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, int16_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__ShortSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__ShortSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__ShortSerializer_1(__NetSerializer__ShortSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__ShortSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__ShortSerializer_1(__NetSerializer__ShortSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::UShortSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::UShortSerializer`1<T>*
class CORDL_TYPE __NetSerializer__UShortSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, uint16_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__UShortSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__UShortSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__UShortSerializer_1(__NetSerializer__UShortSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__UShortSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__UShortSerializer_1(__NetSerializer__UShortSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::LongSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::LongSerializer`1<T>*
class CORDL_TYPE __NetSerializer__LongSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, int64_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__LongSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__LongSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__LongSerializer_1(__NetSerializer__LongSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__LongSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__LongSerializer_1(__NetSerializer__LongSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::ULongSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::ULongSerializer`1<T>*
class CORDL_TYPE __NetSerializer__ULongSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, uint64_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__ULongSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__ULongSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__ULongSerializer_1(__NetSerializer__ULongSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__ULongSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__ULongSerializer_1(__NetSerializer__ULongSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::ByteSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::ByteSerializer`1<T>*
class CORDL_TYPE __NetSerializer__ByteSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, uint8_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__ByteSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__ByteSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__ByteSerializer_1(__NetSerializer__ByteSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__ByteSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__ByteSerializer_1(__NetSerializer__ByteSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::SByteSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::SByteSerializer`1<T>*
class CORDL_TYPE __NetSerializer__SByteSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, int8_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__SByteSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__SByteSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__SByteSerializer_1(__NetSerializer__SByteSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__SByteSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__SByteSerializer_1(__NetSerializer__SByteSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::FloatSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::FloatSerializer`1<T>*
class CORDL_TYPE __NetSerializer__FloatSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, float_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__FloatSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FloatSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__FloatSerializer_1(__NetSerializer__FloatSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__FloatSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__FloatSerializer_1(__NetSerializer__FloatSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::DoubleSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::DoubleSerializer`1<T>*
class CORDL_TYPE __NetSerializer__DoubleSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, double_t> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__DoubleSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__DoubleSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__DoubleSerializer_1(__NetSerializer__DoubleSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__DoubleSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__DoubleSerializer_1(__NetSerializer__DoubleSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::BoolSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::BoolSerializer`1<T>*
class CORDL_TYPE __NetSerializer__BoolSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, bool> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>* New_ctor();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__BoolSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__BoolSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__BoolSerializer_1(__NetSerializer__BoolSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__BoolSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__BoolSerializer_1(__NetSerializer__BoolSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::CharSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::CharSerializer`1<T>*
class CORDL_TYPE __NetSerializer__CharSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<T, char16_t> {
public:
  // Declarations
  /// @brief Method ElementRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ElementRead(::LiteNetLib::Utils::NetDataReader* r, ByRef<char16_t> prop);

  /// @brief Method ElementWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ByRef<char16_t> prop);

  static inline ::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__CharSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CharSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__CharSerializer_1(__NetSerializer__CharSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CharSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__CharSerializer_1(__NetSerializer__CharSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::IPEndPointSerializer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::IPEndPointSerializer`1<T>*
class CORDL_TYPE __NetSerializer__IPEndPointSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<T, ::System::Net::IPEndPoint*> {
public:
  // Declarations
  /// @brief Method ElementRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ElementRead(::LiteNetLib::Utils::NetDataReader* r, ByRef<::System::Net::IPEndPoint*> prop);

  /// @brief Method ElementWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ByRef<::System::Net::IPEndPoint*> prop);

  static inline ::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__IPEndPointSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__IPEndPointSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__IPEndPointSerializer_1(__NetSerializer__IPEndPointSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__IPEndPointSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__IPEndPointSerializer_1(__NetSerializer__IPEndPointSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::StringSerializer`1
// SizeInfo { instance_size: 64, native_size: 60, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::StringSerializer`1<T>*
class CORDL_TYPE __NetSerializer__StringSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<T, ::StringW> {
public:
  // Declarations
  /// @brief Field _maxLength, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__maxLength, put = __cordl_internal_set__maxLength)) int32_t _maxLength;

  static inline ::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>* New_ctor(int32_t maxLength);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  constexpr int32_t const& __cordl_internal_get__maxLength() const;

  constexpr int32_t& __cordl_internal_get__maxLength();

  constexpr void __cordl_internal_set__maxLength(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxLength);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__StringSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__StringSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__StringSerializer_1(__NetSerializer__StringSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__StringSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__StringSerializer_1(__NetSerializer__StringSerializer_1 const&) = delete;

  /// @brief Field _maxLength, offset: 0x38, size: 0x4, def value: None
  int32_t ____maxLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::EnumByteSerializer`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::EnumByteSerializer`1<T>*
class CORDL_TYPE __NetSerializer__EnumByteSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T> {
public:
  // Declarations
  /// @brief Field Property, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Property, put = __cordl_internal_set_Property))::System::Reflection::PropertyInfo* Property;

  /// @brief Field PropertyType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyType, put = __cordl_internal_set_PropertyType))::System::Type* PropertyType;

  static inline ::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>* New_ctor(::System::Reflection::PropertyInfo* property, ::System::Type* propertyType);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get_Property();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& __cordl_internal_get_Property() const;

  constexpr ::System::Type*& __cordl_internal_get_PropertyType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_PropertyType() const;

  constexpr void __cordl_internal_set_Property(::System::Reflection::PropertyInfo* value);

  constexpr void __cordl_internal_set_PropertyType(::System::Type* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::PropertyInfo* property, ::System::Type* propertyType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__EnumByteSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__EnumByteSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__EnumByteSerializer_1(__NetSerializer__EnumByteSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__EnumByteSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__EnumByteSerializer_1(__NetSerializer__EnumByteSerializer_1 const&) = delete;

  /// @brief Field Property, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___Property;

  /// @brief Field PropertyType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___PropertyType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::EnumIntSerializer`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::EnumIntSerializer`1<T>*
class CORDL_TYPE __NetSerializer__EnumIntSerializer_1 : public ::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T> {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>* New_ctor(::System::Reflection::PropertyInfo* property, ::System::Type* propertyType);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Read(T inf, ::LiteNetLib::Utils::NetDataReader* r);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::PropertyInfo* property, ::System::Type* propertyType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__EnumIntSerializer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__EnumIntSerializer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__EnumIntSerializer_1(__NetSerializer__EnumIntSerializer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__EnumIntSerializer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__EnumIntSerializer_1(__NetSerializer__EnumIntSerializer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::ClassInfo`1
// SizeInfo { instance_size: 32, native_size: 28, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::NetSerializer::ClassInfo`1<T>*
class CORDL_TYPE __NetSerializer__ClassInfo_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* Instance;

  /// @brief Field _membersCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__membersCount, put = __cordl_internal_set__membersCount)) int32_t _membersCount;

  /// @brief Field _serializers, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get__serializers,
               put = __cordl_internal_set__serializers))::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, ::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*> _serializers;

  static inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* New_ctor(::System::Collections::Generic::List_1<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>* serializers);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Read(T obj, ::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Write(T obj, ::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int32_t const& __cordl_internal_get__membersCount() const;

  constexpr int32_t& __cordl_internal_get__membersCount();

  constexpr ::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, ::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*> const& __cordl_internal_get__serializers() const;

  constexpr ::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, ::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>& __cordl_internal_get__serializers();

  constexpr void __cordl_internal_set__membersCount(int32_t value);

  constexpr void __cordl_internal_set__serializers(::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, ::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>* serializers);

  static inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* getStaticF_Instance();

  static inline void setStaticF_Instance(::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__ClassInfo_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__ClassInfo_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__ClassInfo_1(__NetSerializer__ClassInfo_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__ClassInfo_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__ClassInfo_1(__NetSerializer__ClassInfo_1 const&) = delete;

  /// @brief Field _serializers, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, ::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*> ____serializers;

  /// @brief Field _membersCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____membersCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::CustomType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: ::NetSerializer::CustomType*
class CORDL_TYPE __NetSerializer__CustomType : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* Get();

  static inline ::LiteNetLib::Utils::__NetSerializer__CustomType* New_ctor();

  /// @brief Method .ctor, addr 0x25f0bc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__CustomType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CustomType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__CustomType(__NetSerializer__CustomType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CustomType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__CustomType(__NetSerializer__CustomType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::__NetSerializer__CustomType, 0x10>, "Size mismatch!");

} // namespace LiteNetLib::Utils
// Type: ::CustomTypeStruct`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename TProperty>
// Is value type: false
// CS Name: ::NetSerializer::CustomTypeStruct`1<TProperty>*
class CORDL_TYPE __NetSerializer__CustomTypeStruct_1 : public ::LiteNetLib::Utils::__NetSerializer__CustomType {
public:
  // Declarations
  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* Get();

  static inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__CustomTypeStruct_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CustomTypeStruct_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__CustomTypeStruct_1(__NetSerializer__CustomTypeStruct_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CustomTypeStruct_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__CustomTypeStruct_1(__NetSerializer__CustomTypeStruct_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::CustomTypeClass`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename TProperty>
// Is value type: false
// CS Name: ::NetSerializer::CustomTypeClass`1<TProperty>*
class CORDL_TYPE __NetSerializer__CustomTypeClass_1 : public ::LiteNetLib::Utils::__NetSerializer__CustomType {
public:
  // Declarations
  /// @brief Field _constructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__constructor, put = __cordl_internal_set__constructor))::System::Func_1<TProperty>* _constructor;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* Get();

  static inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>* New_ctor(::System::Func_1<TProperty>* constructor);

  constexpr ::System::Func_1<TProperty>*& __cordl_internal_get__constructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TProperty>*> const& __cordl_internal_get__constructor() const;

  constexpr void __cordl_internal_set__constructor(::System::Func_1<TProperty>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<TProperty>* constructor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__CustomTypeClass_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CustomTypeClass_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__CustomTypeClass_1(__NetSerializer__CustomTypeClass_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CustomTypeClass_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__CustomTypeClass_1(__NetSerializer__CustomTypeClass_1 const&) = delete;

  /// @brief Field _constructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<TProperty>* ____constructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::CustomTypeStatic`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename TProperty>
// Is value type: false
// CS Name: ::NetSerializer::CustomTypeStatic`1<TProperty>*
class CORDL_TYPE __NetSerializer__CustomTypeStatic_1 : public ::LiteNetLib::Utils::__NetSerializer__CustomType {
public:
  // Declarations
  /// @brief Field _reader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader))::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* _reader;

  /// @brief Field _writer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__writer, put = __cordl_internal_set__writer))::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* _writer;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* Get();

  static inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>* New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* writer,
                                                                                              ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* reader);

  constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*& __cordl_internal_get__reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*> const& __cordl_internal_get__reader() const;

  constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*& __cordl_internal_get__writer();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*> const& __cordl_internal_get__writer() const;

  constexpr void __cordl_internal_set__reader(::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* value);

  constexpr void __cordl_internal_set__writer(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* writer, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* reader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSerializer__CustomTypeStatic_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CustomTypeStatic_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSerializer__CustomTypeStatic_1(__NetSerializer__CustomTypeStatic_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSerializer__CustomTypeStatic_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSerializer__CustomTypeStatic_1(__NetSerializer__CustomTypeStatic_1 const&) = delete;

  /// @brief Field _writer, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* ____writer;

  /// @brief Field _reader, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* ____reader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: LiteNetLib.Utils::NetSerializer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: ::LiteNetLib.Utils::NetSerializer*
class CORDL_TYPE NetSerializer : public ::System::Object {
public:
  // Declarations
  template <typename T> using BoolSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>;

  template <typename T> using ByteSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>;

  template <typename T> using CharSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>;

  template <typename T> using ClassInfo_1 = ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>;

  using CustomType = ::LiteNetLib::Utils::__NetSerializer__CustomType;

  template <typename TProperty> using CustomTypeClass_1 = ::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>;

  template <typename TProperty> using CustomTypeStatic_1 = ::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>;

  template <typename TProperty> using CustomTypeStruct_1 = ::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>;

  template <typename T> using DoubleSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>;

  template <typename T> using EnumByteSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>;

  template <typename T> using EnumIntSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>;

  template <typename TClass, typename TProperty> using FastCallClass_2 = ::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>;

  template <typename TClass, typename TProperty> using FastCallSpecificAuto_2 = ::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>;

  template <typename TClass, typename TProperty> using FastCallSpecific_2 = ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>;

  template <typename TClass, typename TProperty> using FastCallStatic_2 = ::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>;

  template <typename TClass, typename TProperty> using FastCallStruct_2 = ::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>;

  template <typename T> using FastCall_1 = ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>;

  template <typename T> using FloatSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>;

  template <typename T> using IPEndPointSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>;

  template <typename T> using IntSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>;

  template <typename T> using LongSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>;

  template <typename T> using SByteSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>;

  template <typename T> using ShortSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>;

  template <typename T> using StringSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>;

  template <typename T> using UIntSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>;

  template <typename T> using ULongSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>;

  template <typename T> using UShortSerializer_1 = ::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>;

  /// @brief Field _maxStringLength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxStringLength, put = __cordl_internal_set__maxStringLength)) int32_t _maxStringLength;

  /// @brief Field _registeredTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__registeredTypes,
                      put = __cordl_internal_set__registeredTypes))::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::__NetSerializer__CustomType*>* _registeredTypes;

  /// @brief Field _writer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__writer, put = __cordl_internal_set__writer))::LiteNetLib::Utils::NetDataWriter* _writer;

  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool Deserialize(::LiteNetLib::Utils::NetDataReader* reader, T target);

  static inline ::LiteNetLib::Utils::NetSerializer* New_ctor();

  static inline ::LiteNetLib::Utils::NetSerializer* New_ctor(int32_t maxStringLength);

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Register();

  /// @brief Method RegisterInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* RegisterInternal();

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterNestedType();

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterNestedType(::System::Func_1<T>* constructor);

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>* writer, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>* reader);

  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Serialize(T obj);

  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer, T obj);

  constexpr int32_t const& __cordl_internal_get__maxStringLength() const;

  constexpr int32_t& __cordl_internal_get__maxStringLength();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::__NetSerializer__CustomType*>*& __cordl_internal_get__registeredTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::__NetSerializer__CustomType*>*> const&
  __cordl_internal_get__registeredTypes() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__writer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __cordl_internal_get__writer() const;

  constexpr void __cordl_internal_set__maxStringLength(int32_t value);

  constexpr void __cordl_internal_set__registeredTypes(::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::__NetSerializer__CustomType*>* value);

  constexpr void __cordl_internal_set__writer(::LiteNetLib::Utils::NetDataWriter* value);

  /// @brief Method .ctor, addr 0x25f06a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25f0794, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxStringLength);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSerializer(NetSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSerializer(NetSerializer const&) = delete;

  /// @brief Field _writer, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____writer;

  /// @brief Field _maxStringLength, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxStringLength;

  /// @brief Field _registeredTypes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::__NetSerializer__CustomType*>* ____registeredTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NetSerializer, 0x28>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetSerializer, ____writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetSerializer, ____maxStringLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetSerializer, ____registeredTypes) == 0x20, "Offset mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NetSerializer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetSerializer*, "LiteNetLib.Utils", "NetSerializer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1, "LiteNetLib.Utils", "NetSerializer/BoolSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1, "LiteNetLib.Utils", "NetSerializer/ByteSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__CharSerializer_1, "LiteNetLib.Utils", "NetSerializer/CharSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__ClassInfo_1, "LiteNetLib.Utils", "NetSerializer/ClassInfo`1");
NEED_NO_BOX(::LiteNetLib::Utils::__NetSerializer__CustomType);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::__NetSerializer__CustomType*, "LiteNetLib.Utils", "NetSerializer/CustomType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeClass`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeStatic`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeStruct`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1, "LiteNetLib.Utils", "NetSerializer/DoubleSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1, "LiteNetLib.Utils", "NetSerializer/EnumByteSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1, "LiteNetLib.Utils", "NetSerializer/EnumIntSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__FastCallClass_2, "LiteNetLib.Utils", "NetSerializer/FastCallClass`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2, "LiteNetLib.Utils", "NetSerializer/FastCallSpecificAuto`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2, "LiteNetLib.Utils", "NetSerializer/FastCallSpecific`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2, "LiteNetLib.Utils", "NetSerializer/FastCallStatic`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2, "LiteNetLib.Utils", "NetSerializer/FastCallStruct`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__FastCall_1, "LiteNetLib.Utils", "NetSerializer/FastCall`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1, "LiteNetLib.Utils", "NetSerializer/FloatSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1, "LiteNetLib.Utils", "NetSerializer/IPEndPointSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__IntSerializer_1, "LiteNetLib.Utils", "NetSerializer/IntSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__LongSerializer_1, "LiteNetLib.Utils", "NetSerializer/LongSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1, "LiteNetLib.Utils", "NetSerializer/SByteSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1, "LiteNetLib.Utils", "NetSerializer/ShortSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__StringSerializer_1, "LiteNetLib.Utils", "NetSerializer/StringSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1, "LiteNetLib.Utils", "NetSerializer/UIntSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1, "LiteNetLib.Utils", "NetSerializer/ULongSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1, "LiteNetLib.Utils", "NetSerializer/UShortSerializer`1");
