#pragma once
// IWYU pragma private; include "Zenject/ValidationUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class ValidationUtil___c;
}
// Forward declare root types
namespace Zenject {
class ValidationUtil;
}
namespace Zenject {
class ValidationUtil___c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ValidationUtil);
MARK_REF_PTR_T(::Zenject::ValidationUtil___c);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ValidationUtil/<>c
class CORDL_TYPE ValidationUtil___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::ValidationUtil___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>* __9__0_0;

  static inline ::Zenject::ValidationUtil___c* New_ctor();

  /// @brief Method <CreateDefaultArgs>b__0_0, addr 0x4b4f860, size 0x80, virtual false, abstract: false, final false
  inline ::Zenject::TypeValuePair _CreateDefaultArgs_b__0_0(::System::Type* x);

  /// @brief Method __zenCreate, addr 0x4b4f8e0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4f934, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4f858, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::ValidationUtil___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>* getStaticF___9__0_0();

  static inline void setStaticF___9(::Zenject::ValidationUtil___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationUtil___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationUtil___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationUtil___c(ValidationUtil___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationUtil___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationUtil___c(ValidationUtil___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ValidationUtil___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ValidationUtil
class CORDL_TYPE ValidationUtil : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::ValidationUtil___c;

  /// @brief Method CreateDefaultArgs, addr 0x4b4f6e8, size 0x114, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12700 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ValidationUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ValidationUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ValidationUtil*, "Zenject", "ValidationUtil");
NEED_NO_BOX(::Zenject::ValidationUtil___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ValidationUtil___c*, "Zenject", "ValidationUtil/<>c");
