#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DebugInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugInfo)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Linq::Expressions::Interpreter {
class DebugInfo_DebugInfoComparer;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class DebugInfo;
}
namespace System::Linq::Expressions::Interpreter {
class DebugInfo_DebugInfoComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::DebugInfo);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DebugInfo/DebugInfoComparer
class CORDL_TYPE DebugInfo_DebugInfoComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*() noexcept;

  static inline ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer* New_ctor();

  /// @brief Method System.Collections.Generic.IComparer<System.Linq.Expressions.Interpreter.DebugInfo>.Compare, addr 0x5d84e94, size 0x2c, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IComparer_System_Linq_Expressions_Interpreter_DebugInfo__Compare(::System::Linq::Expressions::Interpreter::DebugInfo* d1,
                                                                                                             ::System::Linq::Expressions::Interpreter::DebugInfo* d2);

  /// @brief Method .ctor, addr 0x5d84e90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>"
  constexpr ::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*
  i___System__Collections__Generic__IComparer_1___System__Linq__Expressions__Interpreter__DebugInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugInfo_DebugInfoComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugInfo_DebugInfoComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugInfo_DebugInfoComparer(DebugInfo_DebugInfoComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugInfo_DebugInfoComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugInfo_DebugInfoComparer(DebugInfo_DebugInfoComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DebugInfo
class CORDL_TYPE DebugInfo : public ::System::Object {
public:
  // Declarations
  using DebugInfoComparer = ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer;

  /// @brief Field EndLine, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_EndLine, put = __cordl_internal_set_EndLine)) int32_t EndLine;

  /// @brief Field FileName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_FileName, put = __cordl_internal_set_FileName)) ::StringW FileName;

  /// @brief Field Index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Index, put = __cordl_internal_set_Index)) int32_t Index;

  /// @brief Field IsClear, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_IsClear, put = __cordl_internal_set_IsClear)) bool IsClear;

  /// @brief Field StartLine, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_StartLine, put = __cordl_internal_set_StartLine)) int32_t StartLine;

  /// @brief Field s_debugComparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_debugComparer, put = setStaticF_s_debugComparer)) ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer* s_debugComparer;

  /// @brief Method GetMatchingDebugInfo, addr 0x5d815c8, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::DebugInfo*
  GetMatchingDebugInfo(::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> debugInfos, int32_t index);

  static inline ::System::Linq::Expressions::Interpreter::DebugInfo* New_ctor();

  /// @brief Method ToString, addr 0x5d84bc8, size 0x25c, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x5d84bc4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer* getStaticF_s_debugComparer();

  static inline void setStaticF_s_debugComparer(::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16393 };

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
static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___StartLine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___EndLine) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___Index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___FileName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DebugInfo, ___IsClear) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::DebugInfo, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::DebugInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::DebugInfo*, "System.Linq.Expressions.Interpreter", "DebugInfo");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*, "System.Linq.Expressions.Interpreter", "DebugInfo/DebugInfoComparer");
