#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugInfo)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Linq::Expressions::Interpreter {
class __DebugInfo__DebugInfoComparer;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class DebugInfo;
}
namespace System::Linq::Expressions::Interpreter {
class __DebugInfo__DebugInfoComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::DebugInfo);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer);
// Type: ::DebugInfoComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::DebugInfo::DebugInfoComparer*
class CORDL_TYPE __DebugInfo__DebugInfoComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*() noexcept;

  static inline ::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer* New_ctor();

  /// @brief Method System.Collections.Generic.IComparer<System.Linq.Expressions.Interpreter.DebugInfo>.Compare, addr 0x2b2b6c4, size 0x34, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IComparer_System_Linq_Expressions_Interpreter_DebugInfo__Compare(::System::Linq::Expressions::Interpreter::DebugInfo* d1,
                                                                                                             ::System::Linq::Expressions::Interpreter::DebugInfo* d2);

  /// @brief Method .ctor, addr 0x2b2b6bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>"
  constexpr ::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*
  i___System__Collections__Generic__IComparer_1___System__Linq__Expressions__Interpreter__DebugInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugInfo__DebugInfoComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugInfo__DebugInfoComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugInfo__DebugInfoComparer(__DebugInfo__DebugInfoComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugInfo__DebugInfoComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugInfo__DebugInfoComparer(__DebugInfo__DebugInfoComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Type: System.Linq.Expressions.Interpreter::DebugInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::DebugInfo*
class CORDL_TYPE DebugInfo : public ::System::Object {
public:
  // Declarations
  using DebugInfoComparer = ::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer;

  /// @brief Field EndLine, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_EndLine, put = __cordl_internal_set_EndLine)) int32_t EndLine;

  /// @brief Field FileName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_FileName, put = __cordl_internal_set_FileName))::StringW FileName;

  /// @brief Field Index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Index, put = __cordl_internal_set_Index)) int32_t Index;

  /// @brief Field IsClear, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_IsClear, put = __cordl_internal_set_IsClear)) bool IsClear;

  /// @brief Field StartLine, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_StartLine, put = __cordl_internal_set_StartLine)) int32_t StartLine;

  /// @brief Field s_debugComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_debugComparer, put = setStaticF_s_debugComparer))::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer* s_debugComparer;

  /// @brief Method GetMatchingDebugInfo, addr 0x2b27218, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::DebugInfo*
  GetMatchingDebugInfo(::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> debugInfos, int32_t index);

  static inline ::System::Linq::Expressions::Interpreter::DebugInfo* New_ctor();

  /// @brief Method ToString, addr 0x2b2b430, size 0x214, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_EndLine() const;

  constexpr int32_t& __cordl_internal_get_EndLine();

  constexpr ::StringW const& __cordl_internal_get_FileName() const;

  constexpr ::StringW& __cordl_internal_get_FileName();

  constexpr int32_t const& __cordl_internal_get_Index() const;

  constexpr int32_t& __cordl_internal_get_Index();

  constexpr bool const& __cordl_internal_get_IsClear() const;

  constexpr bool& __cordl_internal_get_IsClear();

  constexpr int32_t const& __cordl_internal_get_StartLine() const;

  constexpr int32_t& __cordl_internal_get_StartLine();

  constexpr void __cordl_internal_set_EndLine(int32_t value);

  constexpr void __cordl_internal_set_FileName(::StringW value);

  constexpr void __cordl_internal_set_Index(int32_t value);

  constexpr void __cordl_internal_set_IsClear(bool value);

  constexpr void __cordl_internal_set_StartLine(int32_t value);

  /// @brief Method .ctor, addr 0x2b2b428, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer* getStaticF_s_debugComparer();

  static inline void setStaticF_s_debugComparer(::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugInfo(DebugInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugInfo(DebugInfo const&) = delete;

  /// @brief Field StartLine, offset: 0x10, size: 0x4, def value: None
  int32_t ___StartLine;

  /// @brief Field EndLine, offset: 0x14, size: 0x4, def value: None
  int32_t ___EndLine;

  /// @brief Field Index, offset: 0x18, size: 0x4, def value: None
  int32_t ___Index;

  /// @brief Field FileName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___FileName;

  /// @brief Field IsClear, offset: 0x28, size: 0x1, def value: None
  bool ___IsClear;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::DebugInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___StartLine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___EndLine) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___Index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___FileName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___IsClear) == 0x28, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::DebugInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::DebugInfo*, "System.Linq.Expressions.Interpreter", "DebugInfo");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__DebugInfo__DebugInfoComparer*, "System.Linq.Expressions.Interpreter", "DebugInfo/DebugInfoComparer");
