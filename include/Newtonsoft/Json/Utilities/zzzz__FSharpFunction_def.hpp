#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/FSharpFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FSharpFunction)
namespace Newtonsoft::Json::Utilities {
template <typename T, typename TResult> class MethodCall_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class FSharpFunction;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::FSharpFunction);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.FSharpFunction
class CORDL_TYPE FSharpFunction : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance)) ::System::Object* _instance;

  /// @brief Field _invoker, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__invoker, put = __cordl_internal_set__invoker)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* _invoker;

  /// @brief Method Invoke, addr 0x3eccfbc, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::Newtonsoft::Json::Utilities::FSharpFunction* New_ctor(::System::Object* instance, ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* invoker);

  constexpr ::System::Object* const& __cordl_internal_get__instance() const;

  constexpr ::System::Object*& __cordl_internal_get__instance();

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__invoker() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__invoker();

  constexpr void __cordl_internal_set__instance(::System::Object* value);

  constexpr void __cordl_internal_set__invoker(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x3eccf90, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* instance, ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* invoker);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FSharpFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FSharpFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FSharpFunction(FSharpFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FSharpFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FSharpFunction(FSharpFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10232 };

  /// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____instance;

  /// @brief Field _invoker, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ____invoker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpFunction, ____instance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::FSharpFunction, ____invoker) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::FSharpFunction, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::FSharpFunction);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::FSharpFunction*, "Newtonsoft.Json.Utilities", "FSharpFunction");
