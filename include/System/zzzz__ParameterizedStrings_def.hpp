#pragma once
// IWYU pragma private; include "System/ParameterizedStrings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterizedStrings)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct ParameterizedStrings_FormatParam;
}
namespace System {
class ParameterizedStrings_LowLevelStack;
}
// Forward declare root types
namespace System {
class ParameterizedStrings;
}
namespace System {
class ParameterizedStrings_LowLevelStack;
}
namespace System {
struct ParameterizedStrings_FormatParam;
}
// Write type traits
MARK_REF_PTR_T(::System::ParameterizedStrings);
MARK_REF_PTR_T(::System::ParameterizedStrings_LowLevelStack);
MARK_VAL_T(::System::ParameterizedStrings_FormatParam);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ParameterizedStrings/FormatParam
struct CORDL_TYPE ParameterizedStrings_FormatParam {
public:
  // Declarations
  __declspec(property(get = get_Int32)) int32_t Int32;

  __declspec(property(get = get_Object)) ::System::Object* Object;

  __declspec(property(get = get_String)) ::StringW String;

  /// @brief Method .ctor, addr 0x3e5004c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t intValue, ::StringW stringValue);

  /// @brief Method .ctor, addr 0x3e50040, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method get_Int32, addr 0x3e50058, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Int32();

  /// @brief Method get_Object, addr 0x3e4f950, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Object* get_Object();

  /// @brief Method get_String, addr 0x3e4f8fc, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_String();

  /// @brief Method op_Implicit, addr 0x3e4cbd4, size 0xc, virtual false, abstract: false, final false
  static inline ::System::ParameterizedStrings_FormatParam op_Implicit___System__ParameterizedStrings_FormatParam(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterizedStrings_FormatParam();

  // Ctor Parameters [CppParam { name: "_int32", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_string", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr ParameterizedStrings_FormatParam(int32_t _int32, ::StringW _string) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2622 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _int32, offset: 0x0, size: 0x4, def value: None
  int32_t _int32;

  /// @brief Field _string, offset: 0x8, size: 0x8, def value: None
  ::StringW _string;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ParameterizedStrings_FormatParam, _int32) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ParameterizedStrings_FormatParam, _string) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ParameterizedStrings_FormatParam, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ParameterizedStrings/LowLevelStack
class CORDL_TYPE ParameterizedStrings_LowLevelStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field _arr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__arr, put = __cordl_internal_set__arr)) ::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*>
      _arr;

  /// @brief Field _count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Method Clear, addr 0x3e4efe4, size 0x28, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::System::ParameterizedStrings_LowLevelStack* New_ctor();

  /// @brief Method Pop, addr 0x3e4f86c, size 0x90, virtual false, abstract: false, final false
  inline ::System::ParameterizedStrings_FormatParam Pop();

  /// @brief Method Push, addr 0x3e4fbcc, size 0xd8, virtual false, abstract: false, final false
  inline void Push(::System::ParameterizedStrings_FormatParam item);

  constexpr ::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*> const& __cordl_internal_get__arr() const;

  constexpr ::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*>& __cordl_internal_get__arr();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr void __cordl_internal_set__arr(::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*> value);

  constexpr void __cordl_internal_set__count(int32_t value);

  /// @brief Method .ctor, addr 0x3e4ef94, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterizedStrings_LowLevelStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings_LowLevelStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterizedStrings_LowLevelStack(ParameterizedStrings_LowLevelStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings_LowLevelStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterizedStrings_LowLevelStack(ParameterizedStrings_LowLevelStack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2623 };

  /// @brief Field _arr, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*> ____arr;

  /// @brief Field _count, offset: 0x18, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ParameterizedStrings_LowLevelStack, ____arr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ParameterizedStrings_LowLevelStack, ____count) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ParameterizedStrings_LowLevelStack, 0x20>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ParameterizedStrings
class CORDL_TYPE ParameterizedStrings : public ::System::Object {
public:
  // Declarations
  using FormatParam = ::System::ParameterizedStrings_FormatParam;

  using LowLevelStack = ::System::ParameterizedStrings_LowLevelStack;

  /// @brief Field _cachedStack, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__cachedStack, put = setStaticF__cachedStack)) ::System::ParameterizedStrings_LowLevelStack* _cachedStack;

  /// @brief Method AsBool, addr 0x3e4fdb8, size 0xc, virtual false, abstract: false, final false
  static inline bool AsBool(int32_t i);

  /// @brief Method AsInt, addr 0x3e4fdb0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t AsInt(bool b);

  /// @brief Method Evaluate, addr 0x3e4cbe0, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW Evaluate(::StringW format, ::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*> args);

  /// @brief Method EvaluateInternal, addr 0x3e4f00c, size 0x860, virtual false, abstract: false, final false
  static inline ::StringW EvaluateInternal(::StringW format, ::ByRef<int32_t> pos, ::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*> args,
                                           ::System::ParameterizedStrings_LowLevelStack* stack,
                                           ::ByRef<::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*>> dynamicVars,
                                           ::ByRef<::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*>> staticVars);

  /// @brief Method FormatPrintF, addr 0x3e4f9ac, size 0x220, virtual false, abstract: false, final false
  static inline ::StringW FormatPrintF(::StringW format, ::System::Object* arg);

  /// @brief Method GetDynamicOrStaticVariables, addr 0x3e4fca4, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*>
  GetDynamicOrStaticVariables(char16_t c, ::ByRef<::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*>> dynamicVars,
                              ::ByRef<::ArrayW<::System::ParameterizedStrings_FormatParam, ::Array<::System::ParameterizedStrings_FormatParam>*>> staticVars, ::ByRef<int32_t> index);

  /// @brief Method StringFromAsciiBytes, addr 0x3e4fdc4, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW StringFromAsciiBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  static inline ::System::ParameterizedStrings_LowLevelStack* getStaticF__cachedStack();

  static inline void setStaticF__cachedStack(::System::ParameterizedStrings_LowLevelStack* value);

  /// @brief Method snprintf, addr 0x3e4febc, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t snprintf(::cordl_internals::Ptr<uint8_t> str, ::System::IntPtr size, ::StringW format, ::StringW arg1);

  /// @brief Method snprintf, addr 0x3e4ff88, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t snprintf(::cordl_internals::Ptr<uint8_t> str, ::System::IntPtr size, ::StringW format, int32_t arg1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterizedStrings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterizedStrings(ParameterizedStrings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterizedStrings(ParameterizedStrings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2624 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParameterizedStrings, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ParameterizedStrings);
DEFINE_IL2CPP_ARG_TYPE(::System::ParameterizedStrings*, "System", "ParameterizedStrings");
NEED_NO_BOX(::System::ParameterizedStrings_LowLevelStack);
DEFINE_IL2CPP_ARG_TYPE(::System::ParameterizedStrings_LowLevelStack*, "System", "ParameterizedStrings/LowLevelStack");
DEFINE_IL2CPP_ARG_TYPE(::System::ParameterizedStrings_FormatParam, "System", "ParameterizedStrings/FormatParam");
