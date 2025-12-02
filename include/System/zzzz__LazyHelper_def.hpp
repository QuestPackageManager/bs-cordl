#pragma once
// IWYU pragma private; include "System/LazyHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__LazyState_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyHelper)
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading {
struct LazyThreadSafetyMode;
}
namespace System {
class Exception;
}
namespace System {
struct LazyState;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class LazyHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::LazyHelper);
// Dependencies System.LazyState, System.Object
namespace System {
// Is value type: false
// CS Name: System.LazyHelper
class CORDL_TYPE LazyHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field NoneViaConstructor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NoneViaConstructor, put = setStaticF_NoneViaConstructor)) ::System::LazyHelper* NoneViaConstructor;

  /// @brief Field NoneViaFactory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NoneViaFactory, put = setStaticF_NoneViaFactory)) ::System::LazyHelper* NoneViaFactory;

  /// @brief Field PublicationOnlyViaConstructor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PublicationOnlyViaConstructor, put = setStaticF_PublicationOnlyViaConstructor)) ::System::LazyHelper* PublicationOnlyViaConstructor;

  /// @brief Field PublicationOnlyViaFactory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PublicationOnlyViaFactory, put = setStaticF_PublicationOnlyViaFactory)) ::System::LazyHelper* PublicationOnlyViaFactory;

  /// @brief Field PublicationOnlyWaitForOtherThreadToPublish, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PublicationOnlyWaitForOtherThreadToPublish,
                      put = setStaticF_PublicationOnlyWaitForOtherThreadToPublish)) ::System::LazyHelper* PublicationOnlyWaitForOtherThreadToPublish;

  __declspec(property(get = get_State)) ::System::LazyState State;

  /// @brief Field <State>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__State_k__BackingField, put = __cordl_internal_set__State_k__BackingField)) ::System::LazyState _State_k__BackingField;

  /// @brief Field _exceptionDispatch, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__exceptionDispatch, put = __cordl_internal_set__exceptionDispatch)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _exceptionDispatch;

  /// @brief Method Create, addr 0x5a324fc, size 0x158, virtual false, abstract: false, final false
  static inline ::System::LazyHelper* Create(::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor);

  /// @brief Method CreateViaDefaultConstructor, addr 0x5a32654, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Object* CreateViaDefaultConstructor(::System::Type* type);

  static inline ::System::LazyHelper* New_ctor(::System::Threading::LazyThreadSafetyMode mode, ::System::Exception* exception);

  static inline ::System::LazyHelper* New_ctor(::System::LazyState state);

  /// @brief Method ThrowException, addr 0x5a324e4, size 0x18, virtual false, abstract: false, final false
  inline void ThrowException();

  constexpr ::System::LazyState const& __cordl_internal_get__State_k__BackingField() const;

  constexpr ::System::LazyState& __cordl_internal_get__State_k__BackingField();

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get__exceptionDispatch() const;

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get__exceptionDispatch();

  constexpr void __cordl_internal_set__State_k__BackingField(::System::LazyState value);

  constexpr void __cordl_internal_set__exceptionDispatch(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  /// @brief Method .ctor, addr 0x5a324ac, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::LazyThreadSafetyMode mode, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x5a324a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::LazyState state);

  static inline ::System::LazyHelper* getStaticF_NoneViaConstructor();

  static inline ::System::LazyHelper* getStaticF_NoneViaFactory();

  static inline ::System::LazyHelper* getStaticF_PublicationOnlyViaConstructor();

  static inline ::System::LazyHelper* getStaticF_PublicationOnlyViaFactory();

  static inline ::System::LazyHelper* getStaticF_PublicationOnlyWaitForOtherThreadToPublish();

  /// @brief Method get_State, addr 0x5a3249c, size 0x8, virtual false, abstract: false, final false
  inline ::System::LazyState get_State();

  static inline void setStaticF_NoneViaConstructor(::System::LazyHelper* value);

  static inline void setStaticF_NoneViaFactory(::System::LazyHelper* value);

  static inline void setStaticF_PublicationOnlyViaConstructor(::System::LazyHelper* value);

  static inline void setStaticF_PublicationOnlyViaFactory(::System::LazyHelper* value);

  static inline void setStaticF_PublicationOnlyWaitForOtherThreadToPublish(::System::LazyHelper* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyHelper(LazyHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyHelper(LazyHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2435 };

  /// @brief Field <State>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::LazyState ____State_k__BackingField;

  /// @brief Field _exceptionDispatch, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* ____exceptionDispatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::LazyHelper, ____State_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::LazyHelper, ____exceptionDispatch) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::LazyHelper, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::LazyHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::LazyHelper*, "System", "LazyHelper");
