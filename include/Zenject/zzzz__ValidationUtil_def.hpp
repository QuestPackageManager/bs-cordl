#pragma once
// IWYU pragma private; include "Zenject/ValidationUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ValidationUtil)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class __ValidationUtil____c;
}
// Forward declare root types
namespace Zenject {
class ValidationUtil;
}
namespace Zenject {
class __ValidationUtil____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ValidationUtil);
MARK_REF_PTR_T(::Zenject::__ValidationUtil____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::ValidationUtil::<>c*
class CORDL_TYPE __ValidationUtil____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__ValidationUtil____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>* __9__0_0;

  static inline ::Zenject::__ValidationUtil____c* New_ctor();

  /// @brief Method <CreateDefaultArgs>b__0_0, addr 0x4aee470, size 0x80, virtual false, abstract: false, final false
  inline ::Zenject::TypeValuePair _CreateDefaultArgs_b__0_0(::System::Type* x);

  /// @brief Method __zenCreate, addr 0x4aee4f0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4aee544, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4aee468, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__ValidationUtil____c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>* getStaticF___9__0_0();

  static inline void setStaticF___9(::Zenject::__ValidationUtil____c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValidationUtil____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ValidationUtil____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValidationUtil____c(__ValidationUtil____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValidationUtil____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValidationUtil____c(__ValidationUtil____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ValidationUtil____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::ValidationUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ValidationUtil*
class CORDL_TYPE ValidationUtil : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__ValidationUtil____c;

  /// @brief Method CreateDefaultArgs, addr 0x4aee2f8, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateDefaultArgs(::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationUtil(ValidationUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationUtil(ValidationUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ValidationUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ValidationUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ValidationUtil*, "Zenject", "ValidationUtil");
NEED_NO_BOX(::Zenject::__ValidationUtil____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ValidationUtil____c*, "Zenject", "ValidationUtil/<>c");
