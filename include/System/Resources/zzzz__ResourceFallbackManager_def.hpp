#pragma once
// IWYU pragma private; include "System/Resources/ResourceFallbackManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceFallbackManager)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Resources {
class ResourceFallbackManager__GetEnumerator_d__5;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Resources {
class ResourceFallbackManager;
}
namespace System::Resources {
class ResourceFallbackManager__GetEnumerator_d__5;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::ResourceFallbackManager);
MARK_REF_PTR_T(::System::Resources::ResourceFallbackManager__GetEnumerator_d__5);
// Dependencies System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
class CORDL_TYPE ResourceFallbackManager__GetEnumerator_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Globalization_CultureInfo__get_Current)) ::System::Globalization::CultureInfo*
      System_Collections_Generic_IEnumerator_System_Globalization_CultureInfo__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Globalization::CultureInfo* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Resources::ResourceFallbackManager* __4__this;

  /// @brief Field <currentCulture>5__3, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentCulture_5__3, put = __cordl_internal_set__currentCulture_5__3)) ::System::Globalization::CultureInfo* _currentCulture_5__3;

  /// @brief Field <reachedNeutralResourcesCulture>5__2, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__reachedNeutralResourcesCulture_5__2, put = __cordl_internal_set__reachedNeutralResourcesCulture_5__2)) bool _reachedNeutralResourcesCulture_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x59c328c, size 0x1bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Resources::ResourceFallbackManager__GetEnumerator_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Globalization.CultureInfo>.get_Current, addr 0x59c3448, size 0x8, virtual true, abstract: false, final true
  inline ::System::Globalization::CultureInfo* System_Collections_Generic_IEnumerator_System_Globalization_CultureInfo__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x59c3450, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59c3488, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x59c3288, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get___2__current();

  constexpr ::System::Resources::ResourceFallbackManager* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Resources::ResourceFallbackManager*& __cordl_internal_get___4__this();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__currentCulture_5__3() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__currentCulture_5__3();

  constexpr bool const& __cordl_internal_get__reachedNeutralResourcesCulture_5__2() const;

  constexpr bool& __cordl_internal_get__reachedNeutralResourcesCulture_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set___4__this(::System::Resources::ResourceFallbackManager* value);

  constexpr void __cordl_internal_set__currentCulture_5__3(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__reachedNeutralResourcesCulture_5__2(bool value);

  /// @brief Method .ctor, addr 0x59c3280, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>* i___System__Collections__Generic__IEnumerator_1___System__Globalization__CultureInfo__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceFallbackManager__GetEnumerator_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceFallbackManager__GetEnumerator_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceFallbackManager__GetEnumerator_d__5(ResourceFallbackManager__GetEnumerator_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceFallbackManager__GetEnumerator_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceFallbackManager__GetEnumerator_d__5(ResourceFallbackManager__GetEnumerator_d__5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3445 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Resources::ResourceFallbackManager* _____4__this;

  /// @brief Field <reachedNeutralResourcesCulture>5__2, offset: 0x28, size: 0x1, def value: None
  bool ____reachedNeutralResourcesCulture_5__2;

  /// @brief Field <currentCulture>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____currentCulture_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ResourceFallbackManager__GetEnumerator_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceFallbackManager__GetEnumerator_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceFallbackManager__GetEnumerator_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceFallbackManager__GetEnumerator_d__5, ____reachedNeutralResourcesCulture_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceFallbackManager__GetEnumerator_d__5, ____currentCulture_5__3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceFallbackManager__GetEnumerator_d__5, 0x38>, "Size mismatch!");

} // namespace System::Resources
// Dependencies System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ResourceFallbackManager
class CORDL_TYPE ResourceFallbackManager : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__5 = ::System::Resources::ResourceFallbackManager__GetEnumerator_d__5;

  /// @brief Field m_neutralResourcesCulture, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_neutralResourcesCulture, put = __cordl_internal_set_m_neutralResourcesCulture)) ::System::Globalization::CultureInfo* m_neutralResourcesCulture;

  /// @brief Field m_startingCulture, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_startingCulture, put = __cordl_internal_set_m_startingCulture)) ::System::Globalization::CultureInfo* m_startingCulture;

  /// @brief Field m_useParents, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_useParents, put = __cordl_internal_set_m_useParents)) bool m_useParents;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Globalization::CultureInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Globalization::CultureInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x59c322c, size 0x54, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>* GetEnumerator();

  static inline ::System::Resources::ResourceFallbackManager* New_ctor(::System::Globalization::CultureInfo* startingCulture, ::System::Globalization::CultureInfo* neutralResourcesCulture,
                                                                       bool useParents);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x59c3228, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get_m_neutralResourcesCulture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get_m_neutralResourcesCulture();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get_m_startingCulture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get_m_startingCulture();

  constexpr bool const& __cordl_internal_get_m_useParents() const;

  constexpr bool& __cordl_internal_get_m_useParents();

  constexpr void __cordl_internal_set_m_neutralResourcesCulture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set_m_startingCulture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set_m_useParents(bool value);

  /// @brief Method .ctor, addr 0x59c319c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* startingCulture, ::System::Globalization::CultureInfo* neutralResourcesCulture, bool useParents);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Globalization::CultureInfo*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Globalization::CultureInfo*>* i___System__Collections__Generic__IEnumerable_1___System__Globalization__CultureInfo__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceFallbackManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceFallbackManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceFallbackManager(ResourceFallbackManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceFallbackManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceFallbackManager(ResourceFallbackManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3446 };

  /// @brief Field m_startingCulture, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ___m_startingCulture;

  /// @brief Field m_neutralResourcesCulture, offset: 0x18, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ___m_neutralResourcesCulture;

  /// @brief Field m_useParents, offset: 0x20, size: 0x1, def value: None
  bool ___m_useParents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ResourceFallbackManager, ___m_startingCulture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceFallbackManager, ___m_neutralResourcesCulture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceFallbackManager, ___m_useParents) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceFallbackManager, 0x28>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::ResourceFallbackManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceFallbackManager*, "System.Resources", "ResourceFallbackManager");
NEED_NO_BOX(::System::Resources::ResourceFallbackManager__GetEnumerator_d__5);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceFallbackManager__GetEnumerator_d__5*, "System.Resources", "ResourceFallbackManager/<GetEnumerator>d__5");
