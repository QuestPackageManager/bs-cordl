#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StackFrame)
namespace System::Reflection {
class MethodBase;
}
// Forward declare root types
namespace System::Diagnostics {
class StackFrame;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::StackFrame);
// Type: System.Diagnostics::StackFrame
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3739))
// CS Name: ::System.Diagnostics::StackFrame*
class CORDL_TYPE StackFrame : public ::System::Object {
public:
  // Declarations
  /// @brief Field ilOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ilOffset, put = __cordl_internal_set_ilOffset)) int32_t ilOffset;

  /// @brief Field nativeOffset, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_nativeOffset, put = __cordl_internal_set_nativeOffset)) int32_t nativeOffset;

  /// @brief Field methodAddress, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_methodAddress, put = __cordl_internal_set_methodAddress)) int64_t methodAddress;

  /// @brief Field methodIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_methodIndex, put = __cordl_internal_set_methodIndex)) uint32_t methodIndex;

  /// @brief Field methodBase, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_methodBase, put = __cordl_internal_set_methodBase))::System::Reflection::MethodBase* methodBase;

  /// @brief Field fileName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_fileName, put = __cordl_internal_set_fileName))::StringW fileName;

  /// @brief Field lineNumber, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumber, put = __cordl_internal_set_lineNumber)) int32_t lineNumber;

  /// @brief Field columnNumber, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_columnNumber, put = __cordl_internal_set_columnNumber)) int32_t columnNumber;

  /// @brief Field internalMethodName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_internalMethodName, put = __cordl_internal_set_internalMethodName))::StringW internalMethodName;

  constexpr int32_t& __cordl_internal_get_ilOffset();

  constexpr int32_t const& __cordl_internal_get_ilOffset() const;

  constexpr void __cordl_internal_set_ilOffset(int32_t value);

  constexpr int32_t& __cordl_internal_get_nativeOffset();

  constexpr int32_t const& __cordl_internal_get_nativeOffset() const;

  constexpr void __cordl_internal_set_nativeOffset(int32_t value);

  constexpr int64_t& __cordl_internal_get_methodAddress();

  constexpr int64_t const& __cordl_internal_get_methodAddress() const;

  constexpr void __cordl_internal_set_methodAddress(int64_t value);

  constexpr uint32_t& __cordl_internal_get_methodIndex();

  constexpr uint32_t const& __cordl_internal_get_methodIndex() const;

  constexpr void __cordl_internal_set_methodIndex(uint32_t value);

  constexpr ::System::Reflection::MethodBase*& __cordl_internal_get_methodBase();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& __cordl_internal_get_methodBase() const;

  constexpr void __cordl_internal_set_methodBase(::System::Reflection::MethodBase* value);

  constexpr ::StringW& __cordl_internal_get_fileName();

  constexpr ::StringW const& __cordl_internal_get_fileName() const;

  constexpr void __cordl_internal_set_fileName(::StringW value);

  constexpr int32_t& __cordl_internal_get_lineNumber();

  constexpr int32_t const& __cordl_internal_get_lineNumber() const;

  constexpr void __cordl_internal_set_lineNumber(int32_t value);

  constexpr int32_t& __cordl_internal_get_columnNumber();

  constexpr int32_t const& __cordl_internal_get_columnNumber() const;

  constexpr void __cordl_internal_set_columnNumber(int32_t value);

  constexpr ::StringW& __cordl_internal_get_internalMethodName();

  constexpr ::StringW const& __cordl_internal_get_internalMethodName() const;

  constexpr void __cordl_internal_set_internalMethodName(::StringW value);

  /// @brief Method get_frame_info, addr 0x2579ef4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_frame_info(int32_t skip, bool needFileInfo, ByRef<::System::Reflection::MethodBase*> method, ByRef<int32_t> iloffset, ByRef<int32_t> native_offset, ByRef<::StringW> file,
                                    ByRef<int32_t> line, ByRef<int32_t> column);

  static inline ::System::Diagnostics::StackFrame* New_ctor();

  /// @brief Method .ctor, addr 0x2579efc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Diagnostics::StackFrame* New_ctor(int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method .ctor, addr 0x2579f4c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method GetFileLineNumber, addr 0x2579fac, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetFileLineNumber();

  /// @brief Method GetFileName, addr 0x2579fb4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetFileName();

  /// @brief Method GetSecureFileName, addr 0x2579fbc, size 0xd4, virtual false, abstract: false, final false
  inline ::StringW GetSecureFileName();

  /// @brief Method GetILOffset, addr 0x257a090, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetILOffset();

  /// @brief Method GetMethod, addr 0x257a098, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* GetMethod();

  /// @brief Method GetNativeOffset, addr 0x257a0a0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetNativeOffset();

  /// @brief Method GetMethodAddress, addr 0x257a0a8, size 0x8, virtual false, abstract: false, final false
  inline int64_t GetMethodAddress();

  /// @brief Method GetMethodIndex, addr 0x257a0b0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t GetMethodIndex();

  /// @brief Method GetInternalMethodName, addr 0x257a0b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetInternalMethodName();

  /// @brief Method ToString, addr 0x257a0c0, size 0x23c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "StackFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackFrame(StackFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackFrame(StackFrame const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackFrame();

public:
  /// @brief Field ilOffset, offset: 0x10, size: 0x4, def value: None
  int32_t ___ilOffset;

  /// @brief Field nativeOffset, offset: 0x14, size: 0x4, def value: None
  int32_t ___nativeOffset;

  /// @brief Field methodAddress, offset: 0x18, size: 0x8, def value: None
  int64_t ___methodAddress;

  /// @brief Field methodIndex, offset: 0x20, size: 0x4, def value: None
  uint32_t ___methodIndex;

  /// @brief Field methodBase, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ___methodBase;

  /// @brief Field fileName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___fileName;

  /// @brief Field lineNumber, offset: 0x38, size: 0x4, def value: None
  int32_t ___lineNumber;

  /// @brief Field columnNumber, offset: 0x3c, size: 0x4, def value: None
  int32_t ___columnNumber;

  /// @brief Field internalMethodName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___internalMethodName;

  /// @brief Field OFFSET_UNKNOWN offset 0xffffffff size 0x4
  static constexpr int32_t OFFSET_UNKNOWN{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::StackFrame, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___ilOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___nativeOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___methodAddress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___methodIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___methodBase) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___fileName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___lineNumber) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___columnNumber) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackFrame, ___internalMethodName) == 0x40, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::StackFrame);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackFrame*, "System.Diagnostics", "StackFrame");
