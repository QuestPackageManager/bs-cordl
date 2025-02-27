#pragma once
// IWYU pragma private; include "Zenject/LazyInject_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
CORDL_MODULE_EXPORT(LazyInject_1)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
template <typename T> class LazyInject_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::LazyInject_1);
// Dependencies System.Object, Zenject.IValidatable
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Zenject.LazyInject`1<T>
class CORDL_TYPE LazyInject_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value)) T Value;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::Zenject::InjectContext* _context;

  /// @brief Field _hasValue, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__hasValue, put = __cordl_internal_set__hasValue)) bool _hasValue;

  /// @brief Field _value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) T _value;

  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  static inline ::Zenject::LazyInject_1<T>* New_ctor(::Zenject::DiContainer* container, ::Zenject::InjectContext* context);

  /// @brief Method Zenject.IValidatable.Validate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Zenject_IValidatable_Validate();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get__context() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get__context();

  constexpr bool const& __cordl_internal_get__hasValue() const;

  constexpr bool& __cordl_internal_get__hasValue();

  constexpr T const& __cordl_internal_get__value() const;

  constexpr T& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__context(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set__hasValue(bool value);

  constexpr void __cordl_internal_set__value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::InjectContext* context);

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Convert to "::Zenject::IValidatable"
  constexpr ::Zenject::IValidatable* i___Zenject__IValidatable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyInject_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyInject_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyInject_1(LazyInject_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyInject_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyInject_1(LazyInject_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12459 };

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _context, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectContext* ____context;

  /// @brief Field _hasValue, offset: 0x20, size: 0x1, def value: None
  bool ____hasValue;

  /// @brief Field _value, offset: 0x28, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::LazyInject_1, "Zenject", "LazyInject`1");
