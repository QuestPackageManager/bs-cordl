#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallSiteBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CallSiteBinder)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class LabelTarget;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System::Runtime::CompilerServices {
template <typename T> class CallSiteBinder_LambdaSignature_1;
}
namespace System::Runtime::CompilerServices {
template <typename T> class CallSite_1;
}
namespace System::Runtime::CompilerServices {
template <typename T> class RuleCache_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CallSiteBinder;
}
namespace System::Runtime::CompilerServices {
template <typename T> class CallSiteBinder_LambdaSignature_1;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CallSiteBinder);
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1);
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Runtime.CompilerServices.CallSiteBinder/LambdaSignature`1<T>
class CORDL_TYPE CallSiteBinder_LambdaSignature_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters,
                      put = __cordl_internal_set_Parameters)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* Parameters;

  /// @brief Field ReturnLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ReturnLabel, put = __cordl_internal_set_ReturnLabel)) ::System::Linq::Expressions::LabelTarget* ReturnLabel;

  /// @brief Field s_instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_instance, put = setStaticF_s_instance)) ::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>* s_instance;

  static inline ::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>* New_ctor();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* const& __cordl_internal_get_Parameters() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*& __cordl_internal_get_Parameters();

  constexpr ::System::Linq::Expressions::LabelTarget* const& __cordl_internal_get_ReturnLabel() const;

  constexpr ::System::Linq::Expressions::LabelTarget*& __cordl_internal_get_ReturnLabel();

  constexpr void __cordl_internal_set_Parameters(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* value);

  constexpr void __cordl_internal_set_ReturnLabel(::System::Linq::Expressions::LabelTarget* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>* getStaticF_s_instance();

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>* get_Instance();

  static inline void setStaticF_s_instance(::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallSiteBinder_LambdaSignature_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallSiteBinder_LambdaSignature_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallSiteBinder_LambdaSignature_1(CallSiteBinder_LambdaSignature_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallSiteBinder_LambdaSignature_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallSiteBinder_LambdaSignature_1(CallSiteBinder_LambdaSignature_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14135 };

  /// @brief Field Parameters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* ___Parameters;

  /// @brief Field ReturnLabel, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::LabelTarget* ___ReturnLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.CallSiteBinder
class CORDL_TYPE CallSiteBinder : public ::System::Object {
public:
  // Declarations
  template <typename T> using LambdaSignature_1 = ::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>;

  /// @brief Field Cache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Cache, put = __cordl_internal_set_Cache)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* Cache;

  /// @brief Field <UpdateLabel>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__UpdateLabel_k__BackingField, put = setStaticF__UpdateLabel_k__BackingField)) ::System::Linq::Expressions::LabelTarget* _UpdateLabel_k__BackingField;

  /// @brief Method Bind, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Bind(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                       ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters,
                                                       ::System::Linq::Expressions::LabelTarget* returnLabel);

  /// @brief Method BindCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T BindCore(::System::Runtime::CompilerServices::CallSite_1<T>* site, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method BindDelegate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline T BindDelegate(::System::Runtime::CompilerServices::CallSite_1<T>* site, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method CacheTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void CacheTarget(T target);

  /// @brief Method GetRuleCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Runtime::CompilerServices::RuleCache_1<T>* GetRuleCache();

  static inline ::System::Runtime::CompilerServices::CallSiteBinder* New_ctor();

  /// @brief Method Stitch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Linq::Expressions::Expression_1<T>* Stitch(::System::Linq::Expressions::Expression* binding,
                                                                     ::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1<T>* signature);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* const& __cordl_internal_get_Cache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*& __cordl_internal_get_Cache();

  constexpr void __cordl_internal_set_Cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x40fb418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::LabelTarget* getStaticF__UpdateLabel_k__BackingField();

  /// @brief Method get_UpdateLabel, addr 0x40fb420, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* get_UpdateLabel();

  static inline void setStaticF__UpdateLabel_k__BackingField(::System::Linq::Expressions::LabelTarget* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallSiteBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallSiteBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallSiteBinder(CallSiteBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallSiteBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallSiteBinder(CallSiteBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14136 };

  /// @brief Field Cache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* ___Cache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::CallSiteBinder, ___Cache) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CallSiteBinder, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CallSiteBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CallSiteBinder*, "System.Runtime.CompilerServices", "CallSiteBinder");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::CallSiteBinder_LambdaSignature_1, "System.Runtime.CompilerServices", "CallSiteBinder/LambdaSignature`1");
