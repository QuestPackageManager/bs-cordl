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
// CS Name: ::System.Diagnostics::StackFrame*
class CORDL_TYPE StackFrame : public ::System::Object {
public:
  // Declarations
  /// @brief Field columnNumber, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_columnNumber, put = __cordl_internal_set_columnNumber)) int32_t columnNumber;

  /// @brief Field fileName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_fileName, put = __cordl_internal_set_fileName))::StringW fileName;

  /// @brief Field ilOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ilOffset, put = __cordl_internal_set_ilOffset)) int32_t ilOffset;

  /// @brief Field internalMethodName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_internalMethodName, put = __cordl_internal_set_internalMethodName))::StringW internalMethodName;

  /// @brief Field lineNumber, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumber, put = __cordl_internal_set_lineNumber)) int32_t lineNumber;

  /// @brief Field methodAddress, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_methodAddress, put = __cordl_internal_set_methodAddress)) int64_t methodAddress;

  /// @brief Field methodBase, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_methodBase, put = __cordl_internal_set_methodBase))::System::Reflection::MethodBase* methodBase;

  /// @brief Field methodIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_methodIndex, put = __cordl_internal_set_methodIndex)) uint32_t methodIndex;

  /// @brief Field nativeOffset, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_nativeOffset, put = __cordl_internal_set_nativeOffset)) int32_t nativeOffset;

  /// @brief Method GetFileLineNumber, addr 0x266d580, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetFileLineNumber();

  /// @brief Method GetFileName, addr 0x266d588, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetFileName();

  /// @brief Method GetILOffset, addr 0x266d664, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetILOffset();

  /// @brief Method GetInternalMethodName, addr 0x266d68c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetInternalMethodName();

  /// @brief Method GetMethod, addr 0x266d66c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* GetMethod();

  /// @brief Method GetMethodAddress, addr 0x266d67c, size 0x8, virtual false, abstract: false, final false
  inline int64_t GetMethodAddress();

  /// @brief Method GetMethodIndex, addr 0x266d684, size 0x8, virtual false, abstract: false, final false
  inline uint32_t GetMethodIndex();

  /// @brief Method GetNativeOffset, addr 0x266d674, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetNativeOffset();

  /// @brief Method GetSecureFileName, addr 0x266d590, size 0xd4, virtual false, abstract: false, final false
  inline ::StringW GetSecureFileName();

  static inline ::System::Diagnostics::StackFrame* New_ctor();

  static inline ::System::Diagnostics::StackFrame* New_ctor(int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method ToString, addr 0x266d694, size 0x23c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_columnNumber() const;

  constexpr int32_t& __cordl_internal_get_columnNumber();

  constexpr ::StringW const& __cordl_internal_get_fileName() const;

  constexpr ::StringW& __cordl_internal_get_fileName();

  constexpr int32_t const& __cordl_internal_get_ilOffset() const;

  constexpr int32_t& __cordl_internal_get_ilOffset();

  constexpr ::StringW const& __cordl_internal_get_internalMethodName() const;

  constexpr ::StringW& __cordl_internal_get_internalMethodName();

  constexpr int32_t const& __cordl_internal_get_lineNumber() const;

  constexpr int32_t& __cordl_internal_get_lineNumber();

  constexpr int64_t const& __cordl_internal_get_methodAddress() const;

  constexpr int64_t& __cordl_internal_get_methodAddress();

  constexpr ::System::Reflection::MethodBase*& __cordl_internal_get_methodBase();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& __cordl_internal_get_methodBase() const;

  constexpr uint32_t const& __cordl_internal_get_methodIndex() const;

  constexpr uint32_t& __cordl_internal_get_methodIndex();

  constexpr int32_t const& __cordl_internal_get_nativeOffset() const;

  constexpr int32_t& __cordl_internal_get_nativeOffset();

  constexpr void __cordl_internal_set_columnNumber(int32_t value);

  constexpr void __cordl_internal_set_fileName(::StringW value);

  constexpr void __cordl_internal_set_ilOffset(int32_t value);

  constexpr void __cordl_internal_set_internalMethodName(::StringW value);

  constexpr void __cordl_internal_set_lineNumber(int32_t value);

  constexpr void __cordl_internal_set_methodAddress(int64_t value);

  constexpr void __cordl_internal_set_methodBase(::System::Reflection::MethodBase* value);

  constexpr void __cordl_internal_set_methodIndex(uint32_t value);

  constexpr void __cordl_internal_set_nativeOffset(int32_t value);

  /// @brief Method .ctor, addr 0x266d4d0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x266d520, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(int32_t skipFrames, bool fNeedFileInfo);

  /// @brief Method get_frame_info, addr 0x266d4c8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_frame_info(int32_t skip, bool needFileInfo, ByRef<::System::Reflection::MethodBase*> method, ByRef<int32_t> iloffset, ByRef<int32_t> native_offset, ByRef<::StringW> file,
                                    ByRef<int32_t> line, ByRef<int32_t> column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackFrame();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackFrame(StackFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackFrame(StackFrame const&) = delete;

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
