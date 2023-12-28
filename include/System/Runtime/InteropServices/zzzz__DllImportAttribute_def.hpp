#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(3301)), TypeDefinitionIndex(TypeDefinitionIndex(3333))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3330))
// CS Name: ::System.Runtime.InteropServices::DllImportAttribute*
class CORDL_TYPE DllImportAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _val, offset 0x10, size 0x8
  __declspec(property(get = __get__val, put = __set__val))::StringW _val;

  /// @brief Field EntryPoint, offset 0x18, size 0x8
  __declspec(property(get = __get_EntryPoint, put = __set_EntryPoint))::StringW EntryPoint;

  /// @brief Field CharSet, offset 0x20, size 0x4
  __declspec(property(get = __get_CharSet, put = __set_CharSet))::System::Runtime::InteropServices::CharSet CharSet;

  /// @brief Field SetLastError, offset 0x24, size 0x1
  __declspec(property(get = __get_SetLastError, put = __set_SetLastError)) bool SetLastError;

  /// @brief Field ExactSpelling, offset 0x25, size 0x1
  __declspec(property(get = __get_ExactSpelling, put = __set_ExactSpelling)) bool ExactSpelling;

  /// @brief Field PreserveSig, offset 0x26, size 0x1
  __declspec(property(get = __get_PreserveSig, put = __set_PreserveSig)) bool PreserveSig;

  /// @brief Field CallingConvention, offset 0x28, size 0x4
  __declspec(property(get = __get_CallingConvention, put = __set_CallingConvention))::System::Runtime::InteropServices::CallingConvention CallingConvention;

  /// @brief Field BestFitMapping, offset 0x2c, size 0x1
  __declspec(property(get = __get_BestFitMapping, put = __set_BestFitMapping)) bool BestFitMapping;

  /// @brief Field ThrowOnUnmappableChar, offset 0x2d, size 0x1
  __declspec(property(get = __get_ThrowOnUnmappableChar, put = __set_ThrowOnUnmappableChar)) bool ThrowOnUnmappableChar;

  __declspec(property(get = get_Value))::StringW Value;

  constexpr ::StringW& __get__val();

  constexpr ::StringW const& __get__val() const;

  constexpr void __set__val(::StringW value);

  constexpr ::StringW& __get_EntryPoint();

  constexpr ::StringW const& __get_EntryPoint() const;

  constexpr void __set_EntryPoint(::StringW value);

  constexpr ::System::Runtime::InteropServices::CharSet& __get_CharSet();

  constexpr ::System::Runtime::InteropServices::CharSet const& __get_CharSet() const;

  constexpr void __set_CharSet(::System::Runtime::InteropServices::CharSet value);

  constexpr bool& __get_SetLastError();

  constexpr bool const& __get_SetLastError() const;

  constexpr void __set_SetLastError(bool value);

  constexpr bool& __get_ExactSpelling();

  constexpr bool const& __get_ExactSpelling() const;

  constexpr void __set_ExactSpelling(bool value);

  constexpr bool& __get_PreserveSig();

  constexpr bool const& __get_PreserveSig() const;

  constexpr void __set_PreserveSig(bool value);

  constexpr ::System::Runtime::InteropServices::CallingConvention& __get_CallingConvention();

  constexpr ::System::Runtime::InteropServices::CallingConvention const& __get_CallingConvention() const;

  constexpr void __set_CallingConvention(::System::Runtime::InteropServices::CallingConvention value);

  constexpr bool& __get_BestFitMapping();

  constexpr bool const& __get_BestFitMapping() const;

  constexpr void __set_BestFitMapping(bool value);

  constexpr bool& __get_ThrowOnUnmappableChar();

  constexpr bool const& __get_ThrowOnUnmappableChar() const;

  constexpr void __set_ThrowOnUnmappableChar(bool value);

  /// @brief Method GetCustomAttribute addr 0x24d7310 size 0x1b8 virtual false final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::RuntimeMethodInfo* method);

  /// @brief Method IsDefined addr 0x24d7554 size 0x28 virtual false final false
  static inline bool IsDefined(::System::Reflection::RuntimeMethodInfo* method);

  static inline ::System::Runtime::InteropServices::DllImportAttribute* New_ctor(::StringW dllName, ::StringW entryPoint, ::System::Runtime::InteropServices::CharSet charSet, bool exactSpelling,
                                                                                 bool setLastError, bool preserveSig, ::System::Runtime::InteropServices::CallingConvention callingConvention,
                                                                                 bool bestFitMapping, bool throwOnUnmappableChar);

  /// @brief Method .ctor addr 0x24d74c8 size 0x8c virtual false final false
  inline void _ctor(::StringW dllName, ::StringW entryPoint, ::System::Runtime::InteropServices::CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig,
                    ::System::Runtime::InteropServices::CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar);

  static inline ::System::Runtime::InteropServices::DllImportAttribute* New_ctor(::StringW dllName);

  /// @brief Method .ctor addr 0x24d757c size 0x28 virtual false final false
  inline void _ctor(::StringW dllName);

  /// @brief Method get_Value addr 0x24d75a4 size 0x8 virtual false final false
  inline ::StringW get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "DllImportAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DllImportAttribute(DllImportAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DllImportAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DllImportAttribute(DllImportAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DllImportAttribute();

public:
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

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::DllImportAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::DllImportAttribute*, "System.Runtime.InteropServices", "DllImportAttribute");
