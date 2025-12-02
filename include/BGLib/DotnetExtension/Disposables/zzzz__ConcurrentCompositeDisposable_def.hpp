#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/ConcurrentCompositeDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentCompositeDisposable)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BGLib::DotnetExtension::Disposables {
class ConcurrentCompositeDisposable;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable);
// Dependencies System.Object
namespace BGLib::DotnetExtension::Disposables {
// Is value type: false
// CS Name: BGLib.DotnetExtension.Disposables.ConcurrentCompositeDisposable
class CORDL_TYPE ConcurrentCompositeDisposable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field _disposables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__disposables, put = __cordl_internal_set__disposables)) ::System::Collections::Generic::List_1<::System::IDisposable*>* _disposables;

  /// @brief Field _gate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gate, put = __cordl_internal_set__gate)) ::System::Object* _gate;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::IDisposable*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::IDisposable*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x31e8184, size 0x198, virtual true, abstract: false, final true
  inline void Add(::System::IDisposable* item);

  /// @brief Method Clear, addr 0x31e847c, size 0x10c, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x31e8588, size 0x114, virtual true, abstract: false, final true
  inline bool Contains(::System::IDisposable* item);

  /// @brief Method CopyTo, addr 0x31e869c, size 0x1b8, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*> array, int32_t arrayIndex);

  /// @brief Method Dispose, addr 0x31e8984, size 0x258, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x31e8854, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::IDisposable*>* GetEnumerator();

  static inline ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* New_ctor();

  static inline ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* New_ctor(int32_t capacity);

  static inline ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* New_ctor(::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*> checkers);

  static inline ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>* checkers);

  /// @brief Method Remove, addr 0x31e831c, size 0x160, virtual true, abstract: false, final true
  inline bool Remove(::System::IDisposable* item);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x31e8980, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& __cordl_internal_get__disposables() const;

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __cordl_internal_get__disposables();

  constexpr ::System::Object* const& __cordl_internal_get__gate() const;

  constexpr ::System::Object*& __cordl_internal_get__gate();

  constexpr void __cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value);

  constexpr void __cordl_internal_set__gate(::System::Object* value);

  /// @brief Method .ctor, addr 0x31e7e0c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x31e7ea8, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x31e7f9c, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::IDisposable*, ::Array<::System::IDisposable*>*> checkers);

  /// @brief Method .ctor, addr 0x31e8090, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>* checkers);

  /// @brief Method get_Count, addr 0x31e7d10, size 0xf4, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x31e7e04, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::IDisposable*>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::IDisposable*>* i___System__Collections__Generic__ICollection_1___System__IDisposable__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>* i___System__Collections__Generic__IEnumerable_1___System__IDisposable__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentCompositeDisposable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentCompositeDisposable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentCompositeDisposable(ConcurrentCompositeDisposable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentCompositeDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentCompositeDisposable(ConcurrentCompositeDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20516 };

  /// @brief Field _gate, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____gate;

  /// @brief Field _disposables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::IDisposable*>* ____disposables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable, ____gate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable, ____disposables) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable, 0x20>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::Disposables
NEED_NO_BOX(::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*, "BGLib.DotnetExtension.Disposables", "ConcurrentCompositeDisposable");
