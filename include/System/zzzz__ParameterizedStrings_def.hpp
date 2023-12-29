#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterizedStrings)
namespace System {
class __ParameterizedStrings__LowLevelStack;
}
namespace System {
class Object;
}
namespace System {
struct __ParameterizedStrings__FormatParam;
}
// Forward declare root types
namespace System {
class ParameterizedStrings;
}
namespace System {
class __ParameterizedStrings__LowLevelStack;
}
namespace System {
struct __ParameterizedStrings__FormatParam;
}
// Write type traits
MARK_REF_PTR_T(::System::ParameterizedStrings);
MARK_REF_PTR_T(::System::__ParameterizedStrings__LowLevelStack);
MARK_VAL_T(::System::__ParameterizedStrings__FormatParam);
// Type: ::FormatParam
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2618))
// CS Name: ::ParameterizedStrings::FormatParam
struct CORDL_TYPE __ParameterizedStrings__FormatParam {
public:
  // Declarations
  __declspec(property(get = get_Int32)) int32_t Int32;

  __declspec(property(get = get_String))::StringW String;

  __declspec(property(get = get_Object))::System::Object* Object;

  /// @brief Method .ctor addr 0x24ab458 size 0xc virtual false final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor addr 0x24ab464 size 0xc virtual false final false
  inline void _ctor(int32_t intValue, ::StringW stringValue);

  /// @brief Method op_Implicit addr 0x24a7f20 size 0xc virtual false final false
  static inline ::System::__ParameterizedStrings__FormatParam op_Implicit___System____ParameterizedStrings__FormatParam(int32_t value);

  /// @brief Method get_Int32 addr 0x24ab470 size 0x8 virtual false final false
  inline int32_t get_Int32();

  /// @brief Method get_String addr 0x24aace4 size 0x54 virtual false final false
  inline ::StringW get_String();

  /// @brief Method get_Object addr 0x24aad38 size 0x5c virtual false final false
  inline ::System::Object* get_Object();

  // Ctor Parameters [CppParam { name: "_int32", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_string", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __ParameterizedStrings__FormatParam(int32_t _int32, ::StringW _string) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParameterizedStrings__FormatParam();

  /// @brief Field _int32, offset: 0x0, size: 0x4, def value: None
  int32_t _int32;

  /// @brief Field _string, offset: 0x8, size: 0x8, def value: None
  ::StringW _string;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__ParameterizedStrings__FormatParam, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::__ParameterizedStrings__FormatParam, _int32) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__ParameterizedStrings__FormatParam, _string) == 0x8, "Offset mismatch!");

} // namespace System
// Type: ::LowLevelStack
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2619))
// CS Name: ::ParameterizedStrings::LowLevelStack*
class CORDL_TYPE __ParameterizedStrings__LowLevelStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field _arr, offset 0x10, size 0x8
  __declspec(property(get = __get__arr, put = __set__arr))::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*> _arr;

  /// @brief Field _count, offset 0x18, size 0x4
  __declspec(property(get = __get__count, put = __set__count)) int32_t _count;

  constexpr ::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*>& __get__arr();

  constexpr ::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*> const& __get__arr() const;

  constexpr void __set__arr(::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*> value);

  constexpr int32_t& __get__count();

  constexpr int32_t const& __get__count() const;

  constexpr void __set__count(int32_t value);

  static inline ::System::__ParameterizedStrings__LowLevelStack* New_ctor();

  /// @brief Method .ctor addr 0x24aa37c size 0x50 virtual false final false
  inline void _ctor();

  /// @brief Method Pop addr 0x24aac50 size 0x94 virtual false final false
  inline ::System::__ParameterizedStrings__FormatParam Pop();

  /// @brief Method Push addr 0x24aafe8 size 0xd8 virtual false final false
  inline void Push(::System::__ParameterizedStrings__FormatParam item);

  /// @brief Method Clear addr 0x24aa3cc size 0x28 virtual false final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "__ParameterizedStrings__LowLevelStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ParameterizedStrings__LowLevelStack(__ParameterizedStrings__LowLevelStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ParameterizedStrings__LowLevelStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ParameterizedStrings__LowLevelStack(__ParameterizedStrings__LowLevelStack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParameterizedStrings__LowLevelStack();

public:
  /// @brief Field _arr, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*> ____arr;

  /// @brief Field _count, offset: 0x18, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__ParameterizedStrings__LowLevelStack, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::__ParameterizedStrings__LowLevelStack, ____arr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__ParameterizedStrings__LowLevelStack, ____count) == 0x18, "Offset mismatch!");

} // namespace System
// Type: System::ParameterizedStrings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2620))
// CS Name: ::System::ParameterizedStrings*
class CORDL_TYPE ParameterizedStrings : public ::System::Object {
public:
  // Declarations
  using LowLevelStack = ::System::__ParameterizedStrings__LowLevelStack;

  using FormatParam = ::System::__ParameterizedStrings__FormatParam;

  /// @brief Field _cachedStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cachedStack, put = setStaticF__cachedStack))::System::__ParameterizedStrings__LowLevelStack* _cachedStack;

  static inline void setStaticF__cachedStack(::System::__ParameterizedStrings__LowLevelStack* value);

  static inline ::System::__ParameterizedStrings__LowLevelStack* getStaticF__cachedStack();

  /// @brief Method Evaluate addr 0x24a7f2c size 0x16c virtual false final false
  static inline ::StringW Evaluate(::StringW format, ::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*> args);

  /// @brief Method EvaluateInternal addr 0x24aa3f4 size 0x85c virtual false final false
  static inline ::StringW EvaluateInternal(::StringW format, ByRef<int32_t> pos, ::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*> args,
                                           ::System::__ParameterizedStrings__LowLevelStack* stack,
                                           ByRef<::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*>> dynamicVars,
                                           ByRef<::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*>> staticVars);

  /// @brief Method AsBool addr 0x24ab1d0 size 0xc virtual false final false
  static inline bool AsBool(int32_t i);

  /// @brief Method AsInt addr 0x24ab1c8 size 0x8 virtual false final false
  static inline int32_t AsInt(bool b);

  /// @brief Method StringFromAsciiBytes addr 0x24ab1dc size 0xf8 virtual false final false
  static inline ::StringW StringFromAsciiBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method snprintf addr 0x24ab2d4 size 0xcc virtual false final false
  static inline int32_t snprintf(::cordl_internals::Ptr<uint8_t> str, void* size, ::StringW format, ::StringW arg1);

  /// @brief Method snprintf addr 0x24ab3a0 size 0xb8 virtual false final false
  static inline int32_t snprintf(::cordl_internals::Ptr<uint8_t> str, void* size, ::StringW format, int32_t arg1);

  /// @brief Method FormatPrintF addr 0x24aad94 size 0x254 virtual false final false
  static inline ::StringW FormatPrintF(::StringW format, ::System::Object* arg);

  /// @brief Method GetDynamicOrStaticVariables addr 0x24ab0c0 size 0x108 virtual false final false
  static inline ::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*>
  GetDynamicOrStaticVariables(char16_t c, ByRef<::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*>> dynamicVars,
                              ByRef<::ArrayW<::System::__ParameterizedStrings__FormatParam, ::Array<::System::__ParameterizedStrings__FormatParam>*>> staticVars, ByRef<int32_t> index);

  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterizedStrings(ParameterizedStrings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterizedStrings(ParameterizedStrings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterizedStrings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParameterizedStrings, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ParameterizedStrings);
DEFINE_IL2CPP_ARG_TYPE(::System::ParameterizedStrings*, "System", "ParameterizedStrings");
NEED_NO_BOX(::System::__ParameterizedStrings__LowLevelStack);
DEFINE_IL2CPP_ARG_TYPE(::System::__ParameterizedStrings__LowLevelStack*, "System", "ParameterizedStrings/LowLevelStack");
DEFINE_IL2CPP_ARG_TYPE(::System::__ParameterizedStrings__FormatParam, "System", "ParameterizedStrings/FormatParam");
