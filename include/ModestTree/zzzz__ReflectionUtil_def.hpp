#pragma once
// IWYU pragma private; include "ModestTree/ReflectionUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionUtil)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IList;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6;
}
namespace System {
class Action;
}
namespace System {
class Array;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ModestTree {
class ReflectionUtil;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::ReflectionUtil);
// Type: ModestTree::ReflectionUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::ModestTree::ReflectionUtil*
class CORDL_TYPE ReflectionUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateArray, addr 0x363e6f0, size 0x308, virtual false, abstract: false, final false
  static inline ::System::Array* CreateArray(::System::Type* elementType, ::System::Collections::Generic::List_1<::System::Object*>* instances);

  /// @brief Method CreateGenericList, addr 0x363e9f8, size 0x458, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateGenericList(::System::Type* elementType, ::System::Collections::Generic::List_1<::System::Object*>* instances);

  /// @brief Method ToDebugString, addr 0x363ef80, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToDebugString(::System::Action* action);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1> static inline ::StringW ToDebugString(::System::Action_1<TParam1>* action);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2> static inline ::StringW ToDebugString(::System::Action_2<TParam1, TParam2>* action);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3> static inline ::StringW ToDebugString(::System::Action_3<TParam1, TParam2, TParam3>* action);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4> static inline ::StringW ToDebugString(::System::Action_4<TParam1, TParam2, TParam3, TParam4>* action);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  static inline ::StringW ToDebugString(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TParam5>* action);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  static inline ::StringW ToDebugString(::System::Action_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* action);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1> static inline ::StringW ToDebugString(::System::Func_1<TParam1>* func);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2> static inline ::StringW ToDebugString(::System::Func_2<TParam1, TParam2>* func);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3> static inline ::StringW ToDebugString(::System::Func_3<TParam1, TParam2, TParam3>* func);

  /// @brief Method ToDebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4> static inline ::StringW ToDebugString(::System::Func_4<TParam1, TParam2, TParam3, TParam4>* func);

  /// @brief Method ToDebugString, addr 0x363ee50, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW ToDebugString(::System::Reflection::MethodInfo* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionUtil(ReflectionUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionUtil(ReflectionUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::ReflectionUtil, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::ReflectionUtil);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::ReflectionUtil*, "ModestTree", "ReflectionUtil");
