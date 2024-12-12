#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/DynamicProxy_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamicProxy_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Dynamic {
class BinaryOperationBinder;
}
namespace System::Dynamic {
class ConvertBinder;
}
namespace System::Dynamic {
class CreateInstanceBinder;
}
namespace System::Dynamic {
class DeleteIndexBinder;
}
namespace System::Dynamic {
class DeleteMemberBinder;
}
namespace System::Dynamic {
class GetIndexBinder;
}
namespace System::Dynamic {
class GetMemberBinder;
}
namespace System::Dynamic {
class InvokeBinder;
}
namespace System::Dynamic {
class InvokeMemberBinder;
}
namespace System::Dynamic {
class SetIndexBinder;
}
namespace System::Dynamic {
class SetMemberBinder;
}
namespace System::Dynamic {
class UnaryOperationBinder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename T> class DynamicProxy_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::DynamicProxy_1);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.DynamicProxy`1<T>
class CORDL_TYPE DynamicProxy_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDynamicMemberNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames(T instance);

  static inline ::Newtonsoft::Json::Utilities::DynamicProxy_1<T>* New_ctor();

  /// @brief Method TryBinaryOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryBinaryOperation(T instance, ::System::Dynamic::BinaryOperationBinder* binder, ::System::Object* arg, ::ByRef<::System::Object*> result);

  /// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryConvert(T instance, ::System::Dynamic::ConvertBinder* binder, ::ByRef<::System::Object*> result);

  /// @brief Method TryCreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryCreateInstance(T instance, ::System::Dynamic::CreateInstanceBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::ByRef<::System::Object*> result);

  /// @brief Method TryDeleteIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryDeleteIndex(T instance, ::System::Dynamic::DeleteIndexBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> indexes);

  /// @brief Method TryDeleteMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryDeleteMember(T instance, ::System::Dynamic::DeleteMemberBinder* binder);

  /// @brief Method TryGetIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetIndex(T instance, ::System::Dynamic::GetIndexBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> indexes, ::ByRef<::System::Object*> result);

  /// @brief Method TryGetMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetMember(T instance, ::System::Dynamic::GetMemberBinder* binder, ::ByRef<::System::Object*> result);

  /// @brief Method TryInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryInvoke(T instance, ::System::Dynamic::InvokeBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::ByRef<::System::Object*> result);

  /// @brief Method TryInvokeMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryInvokeMember(T instance, ::System::Dynamic::InvokeMemberBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::ByRef<::System::Object*> result);

  /// @brief Method TrySetIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TrySetIndex(T instance, ::System::Dynamic::SetIndexBinder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> indexes, ::System::Object* value);

  /// @brief Method TrySetMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TrySetMember(T instance, ::System::Dynamic::SetMemberBinder* binder, ::System::Object* value);

  /// @brief Method TryUnaryOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryUnaryOperation(T instance, ::System::Dynamic::UnaryOperationBinder* binder, ::ByRef<::System::Object*> result);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicProxy_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicProxy_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicProxy_1(DynamicProxy_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicProxy_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicProxy_1(DynamicProxy_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10203 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::DynamicProxy_1, "Newtonsoft.Json.Utilities", "DynamicProxy`1");
