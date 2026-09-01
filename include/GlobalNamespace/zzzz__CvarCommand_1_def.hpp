#pragma once
// IWYU pragma private; include "GlobalNamespace\CvarCommand_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CvarCommand_1)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class CvarCommand_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::CvarCommand_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::CvarCommand_1, "", "CvarCommand`1");
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: CvarCommand`1<T>
class CORDL_TYPE CvarCommand_1 : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  /// @brief Field _target, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__target, put = __cordl_internal_set__target)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _target;

  /// @brief Field _value, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::GlobalNamespace::OptionalArgument_1<T>* _value;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Field kCommandName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kCommandName, put = setStaticF_kCommandName)) ::StringW kCommandName;

  /// @brief Field kDescription, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kDescription, put = setStaticF_kDescription)) ::StringW kDescription;

  /// @brief Field kTypeName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kTypeName, put = setStaticF_kTypeName)) ::StringW kTypeName;

  /// @brief Method ExecuteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::CvarCommand_1<T>* New_ctor();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__target() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__target();

  constexpr ::GlobalNamespace::OptionalArgument_1<T>* const& __cordl_internal_get__value() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<T>*& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__target(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__value(::GlobalNamespace::OptionalArgument_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_kCommandName();

  static inline ::StringW getStaticF_kDescription();

  static inline ::StringW getStaticF_kTypeName();

  /// @brief Method get_commandName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_description();

  static inline void setStaticF_kCommandName(::StringW value);

  static inline void setStaticF_kDescription(::StringW value);

  static inline void setStaticF_kTypeName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CvarCommand_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CvarCommand_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CvarCommand_1(CvarCommand_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CvarCommand_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CvarCommand_1(CvarCommand_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19377 };

  /// @brief Field _target, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____target;

  /// @brief Field _value, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<T>* ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
