#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Awaitable_1)
namespace System::Threading {
template <typename T> class ThreadLocal_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine {
template <typename T> class Awaitable_1___c;
}
namespace UnityEngine {
class Awaitable;
}
// Forward declare root types
namespace UnityEngine {
template <typename T> class Awaitable_1;
}
namespace UnityEngine {
template <typename T> class Awaitable_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Awaitable_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Awaitable_1___c);
// Dependencies System.Object
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Awaitable`1/<>c<T>
class CORDL_TYPE Awaitable_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Awaitable_1___c<T>* __9;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1)) ::System::Func_1<::UnityEngine::Awaitable_1<T>*>* __9__15_1;

  static inline ::UnityEngine::Awaitable_1___c<T>* New_ctor();

  /// @brief Method <.cctor>b__15_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>* __cctor_b__15_0();

  /// @brief Method <.cctor>b__15_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Awaitable_1<T>* __cctor_b__15_1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Awaitable_1___c<T>* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::Awaitable_1<T>*>* getStaticF___9__15_1();

  static inline void setStaticF___9(::UnityEngine::Awaitable_1___c<T>* value);

  static inline void setStaticF___9__15_1(::System::Func_1<::UnityEngine::Awaitable_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Awaitable_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Awaitable_1___c(Awaitable_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Awaitable_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Awaitable_1___c(Awaitable_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Awaitable`1<T>
class CORDL_TYPE Awaitable_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Awaitable_1___c<T>;

  /// @brief Field _awaitable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__awaitable, put = __cordl_internal_set__awaitable)) ::UnityEngine::Awaitable* _awaitable;

  /// @brief Field _pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pool, put = setStaticF__pool)) ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>* _pool;

  /// @brief Field _result, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__result, put = __cordl_internal_set__result)) T _result;

  /// @brief Method GetManaged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Awaitable_1<T>* GetManaged();

  static inline ::UnityEngine::Awaitable_1<T>* New_ctor();

  /// @brief Method SetExceptionAndRaiseContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetExceptionAndRaiseContinuation(::System::Exception* exception);

  /// @brief Method SetResultAndRaiseContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResultAndRaiseContinuation(T result);

  constexpr ::UnityEngine::Awaitable* const& __cordl_internal_get__awaitable() const;

  constexpr ::UnityEngine::Awaitable*& __cordl_internal_get__awaitable();

  constexpr T const& __cordl_internal_get__result() const;

  constexpr T& __cordl_internal_get__result();

  constexpr void __cordl_internal_set__awaitable(::UnityEngine::Awaitable* value);

  constexpr void __cordl_internal_set__result(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>* getStaticF__pool();

  static inline void setStaticF__pool(::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Awaitable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Awaitable_1(Awaitable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Awaitable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Awaitable_1(Awaitable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10306 };

  /// @brief Field _awaitable, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Awaitable* ____awaitable;

  /// @brief Field _result, offset: 0x18, size: 0x8, def value: None
  T ____result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Awaitable_1, "UnityEngine", "Awaitable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Awaitable_1___c, "UnityEngine", "Awaitable`1/<>c");
