#pragma once
// IWYU pragma private; include "System\Dynamic\Utils\EmptyReadOnlyCollection_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__EmptyReadOnlyCollection_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
template <typename T> inline void System::Dynamic::Utils::EmptyReadOnlyCollection_1<T>::setStaticF_Instance(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*, "Instance", ::System::Dynamic::Utils::EmptyReadOnlyCollection_1<T>*>(
      std::forward<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(value));
}
template <typename T> inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Dynamic::Utils::EmptyReadOnlyCollection_1<T>::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*, "Instance", ::System::Dynamic::Utils::EmptyReadOnlyCollection_1<T>*>();
}
// Ctor Parameters []
template <typename T> constexpr ::System::Dynamic::Utils::EmptyReadOnlyCollection_1<T>::EmptyReadOnlyCollection_1() {}
