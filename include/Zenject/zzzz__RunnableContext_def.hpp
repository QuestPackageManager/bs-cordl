#pragma once
// IWYU pragma private; include "Zenject/RunnableContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Context_def.hpp"
CORDL_MODULE_EXPORT(RunnableContext)
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class RunnableContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::RunnableContext);
// Dependencies Zenject.Context
namespace Zenject {
// Is value type: false
// CS Name: Zenject.RunnableContext
class CORDL_TYPE RunnableContext : public ::Zenject::Context {
public:
  // Declarations
  __declspec(property(get = get_Initialized, put = set_Initialized)) bool Initialized;

  /// @brief Field <Initialized>k__BackingField, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__Initialized_k__BackingField, put = __cordl_internal_set__Initialized_k__BackingField)) bool _Initialized_k__BackingField;

  /// @brief Field _autoRun, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__autoRun, put = __cordl_internal_set__autoRun)) bool _autoRun;

  /// @brief Field _staticAutoRun, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__staticAutoRun, put = setStaticF__staticAutoRun)) bool _staticAutoRun;

  /// @brief Method CreateComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T CreateComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method Initialize, addr 0x4b25a58, size 0x9c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::Zenject::RunnableContext* New_ctor();

  /// @brief Method Run, addr 0x4b28838, size 0x70, virtual true, abstract: false, final false
  inline void Run();

  /// @brief Method RunInternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RunInternal();

  constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Initialized_k__BackingField();

  constexpr bool const& __cordl_internal_get__autoRun() const;

  constexpr bool& __cordl_internal_get__autoRun();

  constexpr void __cordl_internal_set__Initialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__autoRun(bool value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b288f4, size 0x16c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b263b8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__staticAutoRun();

  /// @brief Method get_Initialized, addr 0x4b28824, size 0x8, virtual false, abstract: false, final false
  inline bool get_Initialized();

  static inline void setStaticF__staticAutoRun(bool value);

  /// @brief Method set_Initialized, addr 0x4b2882c, size 0xc, virtual false, abstract: false, final false
  inline void set_Initialized(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunnableContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunnableContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunnableContext(RunnableContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunnableContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunnableContext(RunnableContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12464 };

  /// @brief Field _autoRun, offset: 0x48, size: 0x1, def value: None
  bool ____autoRun;

  /// @brief Field <Initialized>k__BackingField, offset: 0x49, size: 0x1, def value: None
  bool ____Initialized_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::RunnableContext, ____autoRun) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::RunnableContext, ____Initialized_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::RunnableContext, 0x50>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::RunnableContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::RunnableContext*, "Zenject", "RunnableContext");
