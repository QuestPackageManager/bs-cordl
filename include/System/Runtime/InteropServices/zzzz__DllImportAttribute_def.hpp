#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/DllImportAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
#include "System/Runtime/InteropServices/zzzz__CharSet_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DllImportAttribute)
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Runtime::InteropServices {
struct CallingConvention;
}
namespace System::Runtime::InteropServices {
struct CharSet;
}
namespace System {
class Attribute;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class DllImportAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::DllImportAttribute);
// Type: System.Runtime.InteropServices::DllImportAttribute
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 46, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::DllImportAttribute*
class CORDL_TYPE DllImportAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field BestFitMapping, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_BestFitMapping, put = __cordl_internal_set_BestFitMapping)) bool BestFitMapping;

  /// @brief Field CallingConvention, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_CallingConvention, put = __cordl_internal_set_CallingConvention))::System::Runtime::InteropServices::CallingConvention CallingConvention;

  /// @brief Field CharSet, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_CharSet, put = __cordl_internal_set_CharSet))::System::Runtime::InteropServices::CharSet CharSet;

  /// @brief Field EntryPoint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_EntryPoint, put = __cordl_internal_set_EntryPoint))::StringW EntryPoint;

  /// @brief Field ExactSpelling, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_ExactSpelling, put = __cordl_internal_set_ExactSpelling)) bool ExactSpelling;

  /// @brief Field PreserveSig, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_PreserveSig, put = __cordl_internal_set_PreserveSig)) bool PreserveSig;

  /// @brief Field SetLastError, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_SetLastError, put = __cordl_internal_set_SetLastError)) bool SetLastError;

  /// @brief Field ThrowOnUnmappableChar, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_ThrowOnUnmappableChar, put = __cordl_internal_set_ThrowOnUnmappableChar)) bool ThrowOnUnmappableChar;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Field _val, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__val, put = __cordl_internal_set__val))::StringW _val;

  /// @brief Method GetCustomAttribute, addr 0x2871500, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::RuntimeMethodInfo* method);

  /// @brief Method IsDefined, addr 0x2871744, size 0x28, virtual false, abstract: false, final false
  static inline bool IsDefined(::System::Reflection::RuntimeMethodInfo* method);

  static inline ::System::Runtime::InteropServices::DllImportAttribute* New_ctor(::StringW dllName);

  static inline ::System::Runtime::InteropServices::DllImportAttribute* New_ctor(::StringW dllName, ::StringW entryPoint, ::System::Runtime::InteropServices::CharSet charSet, bool exactSpelling,
                                                                                 bool setLastError, bool preserveSig, ::System::Runtime::InteropServices::CallingConvention callingConvention,
                                                                                 bool bestFitMapping, bool throwOnUnmappableChar);

  constexpr bool const& __cordl_internal_get_BestFitMapping() const;

  constexpr bool& __cordl_internal_get_BestFitMapping();

  constexpr ::System::Runtime::InteropServices::CallingConvention const& __cordl_internal_get_CallingConvention() const;

  constexpr ::System::Runtime::InteropServices::CallingConvention& __cordl_internal_get_CallingConvention();

  constexpr ::System::Runtime::InteropServices::CharSet const& __cordl_internal_get_CharSet() const;

  constexpr ::System::Runtime::InteropServices::CharSet& __cordl_internal_get_CharSet();

  constexpr ::StringW const& __cordl_internal_get_EntryPoint() const;

  constexpr ::StringW& __cordl_internal_get_EntryPoint();

  constexpr bool const& __cordl_internal_get_ExactSpelling() const;

  constexpr bool& __cordl_internal_get_ExactSpelling();

  constexpr bool const& __cordl_internal_get_PreserveSig() const;

  constexpr bool& __cordl_internal_get_PreserveSig();

  constexpr bool const& __cordl_internal_get_SetLastError() const;

  constexpr bool& __cordl_internal_get_SetLastError();

  constexpr bool const& __cordl_internal_get_ThrowOnUnmappableChar() const;

  constexpr bool& __cordl_internal_get_ThrowOnUnmappableChar();

  constexpr ::StringW const& __cordl_internal_get__val() const;

  constexpr ::StringW& __cordl_internal_get__val();

  constexpr void __cordl_internal_set_BestFitMapping(bool value);

  constexpr void __cordl_internal_set_CallingConvention(::System::Runtime::InteropServices::CallingConvention value);

  constexpr void __cordl_internal_set_CharSet(::System::Runtime::InteropServices::CharSet value);

  constexpr void __cordl_internal_set_EntryPoint(::StringW value);

  constexpr void __cordl_internal_set_ExactSpelling(bool value);

  constexpr void __cordl_internal_set_PreserveSig(bool value);

  constexpr void __cordl_internal_set_SetLastError(bool value);

  constexpr void __cordl_internal_set_ThrowOnUnmappableChar(bool value);

  constexpr void __cordl_internal_set__val(::StringW value);

  /// @brief Method .ctor, addr 0x287176c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW dllName);

  /// @brief Method .ctor, addr 0x28716b8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW dllName, ::StringW entryPoint, ::System::Runtime::InteropServices::CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig,
                    ::System::Runtime::InteropServices::CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar);

  /// @brief Method get_Value, addr 0x2871794, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DllImportAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DllImportAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DllImportAttribute(DllImportAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DllImportAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DllImportAttribute(DllImportAttribute const&) = delete;

  /// @brief Field _val, offset: 0x10, size: 0x8, def value: None
  ::StringW ____val;

  /// @brief Field EntryPoint, offset: 0x18, size: 0x8, def value: None
  ::StringW ___EntryPoint;

  /// @brief Field CharSet, offset: 0x20, size: 0x4, def value: None
  ::System::Runtime::InteropServices::CharSet ___CharSet;

  /// @brief Field SetLastError, offset: 0x24, size: 0x1, def value: None
  bool ___SetLastError;

  /// @brief Field ExactSpelling, offset: 0x25, size: 0x1, def value: None
  bool ___ExactSpelling;

  /// @brief Field PreserveSig, offset: 0x26, size: 0x1, def value: None
  bool ___PreserveSig;

  /// @brief Field CallingConvention, offset: 0x28, size: 0x4, def value: None
  ::System::Runtime::InteropServices::CallingConvention ___CallingConvention;

  /// @brief Field BestFitMapping, offset: 0x2c, size: 0x1, def value: None
  bool ___BestFitMapping;

  /// @brief Field ThrowOnUnmappableChar, offset: 0x2d, size: 0x1, def value: None
  bool ___ThrowOnUnmappableChar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::DllImportAttribute, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ____val) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ___EntryPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ___CharSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ___SetLastError) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ___ExactSpelling) == 0x25, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ___PreserveSig) == 0x26, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ___CallingConvention) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ___BestFitMapping) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportAttribute, ___ThrowOnUnmappableChar) == 0x2d, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::DllImportAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::DllImportAttribute*, "System.Runtime.InteropServices", "DllImportAttribute");
