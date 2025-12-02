#pragma once
// IWYU pragma private; include "Unity/Jobs/EarlyInitHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EarlyInitHelpers)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
class EarlyInitHelpers_EarlyInitFunction;
}
// Forward declare root types
namespace Unity::Jobs {
class EarlyInitHelpers;
}
namespace Unity::Jobs {
class EarlyInitHelpers_EarlyInitFunction;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::EarlyInitHelpers);
MARK_REF_PTR_T(::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction);
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.EarlyInitHelpers/EarlyInitFunction
class CORDL_TYPE EarlyInitHelpers_EarlyInitFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62898f8, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6289914, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62898e4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x628987c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyInitHelpers_EarlyInitFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EarlyInitHelpers_EarlyInitFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EarlyInitHelpers_EarlyInitFunction(EarlyInitHelpers_EarlyInitFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EarlyInitHelpers_EarlyInitFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EarlyInitHelpers_EarlyInitFunction(EarlyInitHelpers_EarlyInitFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction, 0x80>, "Size mismatch!");

} // namespace Unity::Jobs
// Dependencies System.Object
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.EarlyInitHelpers
class CORDL_TYPE EarlyInitHelpers : public ::System::Object {
public:
  // Declarations
  using EarlyInitFunction = ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction;

  /// @brief Field s_PendingDelegates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PendingDelegates,
                      put = setStaticF_s_PendingDelegates)) ::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>* s_PendingDelegates;

  /// @brief Method AddEarlyInitFunction, addr 0x62896a4, size 0x154, virtual false, abstract: false, final false
  static inline void AddEarlyInitFunction(::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction* func);

  /// @brief Method FlushEarlyInits, addr 0x62894f4, size 0x1b0, virtual false, abstract: false, final false
  static inline void FlushEarlyInits();

  /// @brief Method JobReflectionDataCreationFailed, addr 0x62897f8, size 0x80, virtual false, abstract: false, final false
  static inline void JobReflectionDataCreationFailed(::System::Exception* ex);

  static inline ::Unity::Jobs::EarlyInitHelpers* New_ctor();

  /// @brief Method .ctor, addr 0x6289878, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>* getStaticF_s_PendingDelegates();

  static inline void setStaticF_s_PendingDelegates(::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyInitHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EarlyInitHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EarlyInitHelpers(EarlyInitHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EarlyInitHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EarlyInitHelpers(EarlyInitHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::EarlyInitHelpers, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::EarlyInitHelpers);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::EarlyInitHelpers*, "Unity.Jobs", "EarlyInitHelpers");
NEED_NO_BOX(::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*, "Unity.Jobs", "EarlyInitHelpers/EarlyInitFunction");
