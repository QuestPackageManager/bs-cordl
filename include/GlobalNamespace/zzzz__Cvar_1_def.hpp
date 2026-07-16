#pragma once
// IWYU pragma private; include "GlobalNamespace/Cvar_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Cvar_1)
namespace GlobalNamespace {
template <typename T> class Cvar_1___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class Cvar_1;
}
namespace GlobalNamespace {
template <typename T> class Cvar_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::Cvar_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::Cvar_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::Cvar_1, "", "Cvar`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::Cvar_1___c, "", "Cvar`1/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Cvar`1/<>c<T>
class CORDL_TYPE Cvar_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::Cvar_1___c<T>* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_2<::System::Type*, bool>* __9__4_0;

  static inline ::GlobalNamespace::Cvar_1___c<T>* New_ctor();

  /// @brief Method <Reset>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _Reset_b__4_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::Cvar_1___c<T>* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__4_0();

  static inline void setStaticF___9(::GlobalNamespace::Cvar_1___c<T>* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cvar_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cvar_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cvar_1___c(Cvar_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cvar_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cvar_1___c(Cvar_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20559 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies ObservableVariable`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Cvar`1<T>
class CORDL_TYPE Cvar_1 : public ::GlobalNamespace::ObservableVariable_1<T> {
public:
  // Declarations
  using __c = ::GlobalNamespace::Cvar_1___c<T>;

  /// @brief Field _cvars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__cvars, put = setStaticF__cvars)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Cvar_1<T>*>* _cvars;

  /// @brief Field _initialValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initialValue, put = __cordl_internal_set__initialValue)) T _initialValue;

  static inline ::GlobalNamespace::Cvar_1<T>* New_ctor(::StringW name, T initialValue);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool TryGetValue(::StringW name, ::by_ref<T> value);

  /// @brief Method TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool TrySetValue(::StringW name, T value);

  constexpr T const& __cordl_internal_get__initialValue() const;

  constexpr T& __cordl_internal_get__initialValue();

  constexpr void __cordl_internal_set__initialValue(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, T initialValue);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Cvar_1<T>*>* getStaticF__cvars();

  /// @brief Method get_List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::ICollection_1<::StringW>* get_List();

  static inline void setStaticF__cvars(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Cvar_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cvar_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cvar_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cvar_1(Cvar_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cvar_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cvar_1(Cvar_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20560 };

  /// @brief Field _initialValue, offset: 0x20, size: 0x8, def value: None
  T ____initialValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
