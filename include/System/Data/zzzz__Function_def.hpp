#pragma once
// IWYU pragma private; include "System/Data/Function.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__FunctionId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Function)
namespace System::Data {
struct FunctionId;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class Function;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Function);
// Type: System.Data::Function
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::Function*
class CORDL_TYPE Function : public ::System::Object {
public:
  // Declarations
  /// @brief Field _argumentCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__argumentCount, put = __cordl_internal_set__argumentCount)) int32_t _argumentCount;

  /// @brief Field _id, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::System::Data::FunctionId _id;

  /// @brief Field _isValidateArguments, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isValidateArguments, put = __cordl_internal_set__isValidateArguments)) bool _isValidateArguments;

  /// @brief Field _isVariantArgumentList, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__isVariantArgumentList, put = __cordl_internal_set__isVariantArgumentList)) bool _isVariantArgumentList;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _parameters, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__parameters, put = __cordl_internal_set__parameters)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _parameters;

  /// @brief Field _result, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__result, put = __cordl_internal_set__result)) ::System::Type* _result;

  /// @brief Field s_functionName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_functionName, put = setStaticF_s_functionName)) ::ArrayW<::StringW, ::Array<::StringW>*> s_functionName;

  static inline ::System::Data::Function* New_ctor(::StringW name, ::System::Data::FunctionId id, ::System::Type* result, bool IsValidateArguments, bool IsVariantArgumentList, int32_t argumentCount,
                                                   ::System::Type* a1, ::System::Type* a2, ::System::Type* a3);

  constexpr int32_t const& __cordl_internal_get__argumentCount() const;

  constexpr int32_t& __cordl_internal_get__argumentCount();

  constexpr ::System::Data::FunctionId const& __cordl_internal_get__id() const;

  constexpr ::System::Data::FunctionId& __cordl_internal_get__id();

  constexpr bool const& __cordl_internal_get__isValidateArguments() const;

  constexpr bool& __cordl_internal_get__isValidateArguments();

  constexpr bool const& __cordl_internal_get__isVariantArgumentList() const;

  constexpr bool& __cordl_internal_get__isVariantArgumentList();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__parameters() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__parameters();

  constexpr ::System::Type*& __cordl_internal_get__result();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__result() const;

  constexpr void __cordl_internal_set__argumentCount(int32_t value);

  constexpr void __cordl_internal_set__id(::System::Data::FunctionId value);

  constexpr void __cordl_internal_set__isValidateArguments(bool value);

  constexpr void __cordl_internal_set__isVariantArgumentList(bool value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__parameters(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set__result(::System::Type* value);

  /// @brief Method .ctor, addr 0x40effcc, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Data::FunctionId id, ::System::Type* result, bool IsValidateArguments, bool IsVariantArgumentList, int32_t argumentCount, ::System::Type* a1,
                    ::System::Type* a2, ::System::Type* a3);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_functionName();

  static inline void setStaticF_s_functionName(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Function();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Function", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Function(Function&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Function", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Function(Function const&) = delete;

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _id, offset: 0x18, size: 0x4, def value: None
  ::System::Data::FunctionId ____id;

  /// @brief Field _result, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____result;

  /// @brief Field _isValidateArguments, offset: 0x28, size: 0x1, def value: None
  bool ____isValidateArguments;

  /// @brief Field _isVariantArgumentList, offset: 0x29, size: 0x1, def value: None
  bool ____isVariantArgumentList;

  /// @brief Field _argumentCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ____argumentCount;

  /// @brief Field _parameters, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____parameters;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Function, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Data::Function, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::Function, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::Function, ____result) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::Function, ____isValidateArguments) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::Function, ____isVariantArgumentList) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Data::Function, ____argumentCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Data::Function, ____parameters) == 0x30, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::Function);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Function*, "System.Data", "Function");
