#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomAttributeData)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
struct CustomAttributeNamedArgument;
}
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class __CustomAttributeData__LazyCAttrData;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
class __CustomAttributeData__LazyCAttrData;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::CustomAttributeData);
MARK_REF_PTR_T(::System::Reflection::__CustomAttributeData__LazyCAttrData);
// Type: ::LazyCAttrData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3513))
// CS Name: ::CustomAttributeData::LazyCAttrData*
class CORDL_TYPE __CustomAttributeData__LazyCAttrData : public ::System::Object {
public:
  // Declarations
  /// @brief Field assembly, offset 0x10, size 0x8
  __declspec(property(get = __get_assembly, put = __set_assembly))::System::Reflection::Assembly* assembly;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data)) void* data;

  /// @brief Field data_length, offset 0x20, size 0x4
  __declspec(property(get = __get_data_length, put = __set_data_length)) uint32_t data_length;

  constexpr ::System::Reflection::Assembly*& __get_assembly();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& __get_assembly() const;

  constexpr void __set_assembly(::System::Reflection::Assembly* value);

  constexpr void*& __get_data();

  constexpr void* const& __get_data() const;

  constexpr void __set_data(void* value);

  constexpr uint32_t& __get_data_length();

  constexpr uint32_t const& __get_data_length() const;

  constexpr void __set_data_length(uint32_t value);

  static inline ::System::Reflection::__CustomAttributeData__LazyCAttrData* New_ctor();

  /// @brief Method .ctor, addr 0x24f0754, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__CustomAttributeData__LazyCAttrData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CustomAttributeData__LazyCAttrData(__CustomAttributeData__LazyCAttrData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CustomAttributeData__LazyCAttrData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CustomAttributeData__LazyCAttrData(__CustomAttributeData__LazyCAttrData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CustomAttributeData__LazyCAttrData();

public:
  /// @brief Field assembly, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___assembly;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  void* ___data;

  /// @brief Field data_length, offset: 0x20, size: 0x4, def value: None
  uint32_t ___data_length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__CustomAttributeData__LazyCAttrData, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::__CustomAttributeData__LazyCAttrData, ___assembly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::__CustomAttributeData__LazyCAttrData, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::__CustomAttributeData__LazyCAttrData, ___data_length) == 0x20, "Offset mismatch!");

} // namespace System::Reflection
// Type: System.Reflection::CustomAttributeData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3514))
// CS Name: ::System.Reflection::CustomAttributeData*
class CORDL_TYPE CustomAttributeData : public ::System::Object {
public:
  // Declarations
  using LazyCAttrData = ::System::Reflection::__CustomAttributeData__LazyCAttrData;

  /// @brief Field ctorInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_ctorInfo, put = __set_ctorInfo))::System::Reflection::ConstructorInfo* ctorInfo;

  /// @brief Field ctorArgs, offset 0x18, size 0x8
  __declspec(property(get = __get_ctorArgs, put = __set_ctorArgs))::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs;

  /// @brief Field namedArgs, offset 0x20, size 0x8
  __declspec(property(get = __get_namedArgs, put = __set_namedArgs))::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs;

  /// @brief Field lazyData, offset 0x28, size 0x8
  __declspec(property(get = __get_lazyData, put = __set_lazyData))::System::Reflection::__CustomAttributeData__LazyCAttrData* lazyData;

  __declspec(property(get = get_Constructor))::System::Reflection::ConstructorInfo* Constructor;

  __declspec(property(get = get_ConstructorArguments))::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ConstructorArguments;

  __declspec(property(get = get_NamedArguments))::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* NamedArguments;

  __declspec(property(get = get_AttributeType))::System::Type* AttributeType;

  constexpr ::System::Reflection::ConstructorInfo*& __get_ctorInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get_ctorInfo() const;

  constexpr void __set_ctorInfo(::System::Reflection::ConstructorInfo* value);

  constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*& __get_ctorArgs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*> const& __get_ctorArgs() const;

  constexpr void __set_ctorArgs(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* value);

  constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*& __get_namedArgs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*> const& __get_namedArgs() const;

  constexpr void __set_namedArgs(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* value);

  constexpr ::System::Reflection::__CustomAttributeData__LazyCAttrData*& __get_lazyData();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__CustomAttributeData__LazyCAttrData*> const& __get_lazyData() const;

  constexpr void __set_lazyData(::System::Reflection::__CustomAttributeData__LazyCAttrData* value);

  static inline ::System::Reflection::CustomAttributeData* New_ctor();

  /// @brief Method .ctor, addr 0x24f06b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Reflection::CustomAttributeData* New_ctor(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Reflection::Assembly* assembly, void* data, uint32_t data_length);

  /// @brief Method .ctor, addr 0x24f06bc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Reflection::Assembly* assembly, void* data, uint32_t data_length);

  static inline ::System::Reflection::CustomAttributeData* New_ctor(::System::Reflection::ConstructorInfo* ctorInfo);

  /// @brief Method .ctor, addr 0x24e737c, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ConstructorInfo* ctorInfo);

  static inline ::System::Reflection::CustomAttributeData* New_ctor(::System::Reflection::ConstructorInfo* ctorInfo,
                                                                    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs,
                                                                    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs);

  /// @brief Method .ctor, addr 0x24e7728, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs,
                    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs);

  /// @brief Method ResolveArgumentsInternal, addr 0x24f075c, size 0x4, virtual false, abstract: false, final false
  static inline void ResolveArgumentsInternal(::System::Reflection::ConstructorInfo* ctor, ::System::Reflection::Assembly* assembly, void* data, uint32_t data_length,
                                              ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> ctorArgs, ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> namedArgs);

  /// @brief Method ResolveArguments, addr 0x24f0760, size 0x190, virtual false, abstract: false, final false
  inline void ResolveArguments();

  /// @brief Method get_Constructor, addr 0x24f08f0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* get_Constructor();

  /// @brief Method get_ConstructorArguments, addr 0x24f08f8, size 0x18, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* get_ConstructorArguments();

  /// @brief Method get_NamedArguments, addr 0x24f0910, size 0x18, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* get_NamedArguments();

  /// @brief Method GetCustomAttributes, addr 0x24f0928, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::Assembly* target);

  /// @brief Method GetCustomAttributes, addr 0x24f0984, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::MemberInfo* target);

  /// @brief Method GetCustomAttributesInternal, addr 0x24f09e0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesInternal(::System::RuntimeType* target);

  /// @brief Method GetCustomAttributes, addr 0x24f0a3c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::Module* target);

  /// @brief Method GetCustomAttributes, addr 0x24f0a98, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::ParameterInfo* target);

  /// @brief Method get_AttributeType, addr 0x24f0af4, size 0x20, virtual false, abstract: false, final false
  inline ::System::Type* get_AttributeType();

  /// @brief Method ToString, addr 0x24f0b14, size 0x570, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnboxValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> UnboxValues(::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method Equals, addr 0x24f1084, size 0x680, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x24f1704, size 0x2f8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "CustomAttributeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomAttributeData(CustomAttributeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomAttributeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomAttributeData(CustomAttributeData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomAttributeData();

public:
  /// @brief Field ctorInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___ctorInfo;

  /// @brief Field ctorArgs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ___ctorArgs;

  /// @brief Field namedArgs, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* ___namedArgs;

  /// @brief Field lazyData, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::__CustomAttributeData__LazyCAttrData* ___lazyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CustomAttributeData, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeData, ___ctorInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeData, ___ctorArgs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeData, ___namedArgs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeData, ___lazyData) == 0x28, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::CustomAttributeData);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeData*, "System.Reflection", "CustomAttributeData");
NEED_NO_BOX(::System::Reflection::__CustomAttributeData__LazyCAttrData);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__CustomAttributeData__LazyCAttrData*, "System.Reflection", "CustomAttributeData/LazyCAttrData");
